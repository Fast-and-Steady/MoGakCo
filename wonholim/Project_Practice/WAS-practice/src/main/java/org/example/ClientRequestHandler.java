package org.example;

import org.example.caculator.domain.Calculator;
import org.example.caculator.domain.PositiveNumber;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

import java.io.*;
import java.net.Socket;
import java.nio.charset.StandardCharsets;

public class ClientRequestHandler implements Runnable {
    private static final Logger logger = LoggerFactory.getLogger(ClientRequestHandler.class);
    private final Socket clientSocket;

    public ClientRequestHandler(Socket clientSocket) {
        this.clientSocket = clientSocket;
    }

    @Override
    public void run() {
        // step 2 : Client에게 받아서 요청을 처리한다. -> 쓰레드
        logger.info("[ClientRequestHandler] new client {} started", Thread.currentThread().getName());
        try(InputStream in = clientSocket.getInputStream(); OutputStream out = clientSocket.getOutputStream()) {

            BufferedReader br = new BufferedReader(new InputStreamReader(in, StandardCharsets.UTF_8));
            DataOutputStream dos = new DataOutputStream(out);
            HttpRequest httpRequest = new HttpRequest(br);

            if (httpRequest.isGetRequest() & httpRequest.matchPath("/calculate")) {
                QueryStrings queryStrings = httpRequest.getQueryString();

                int operand1 = Integer.parseInt(queryStrings.getValue("operand1"));
                String operator = queryStrings.getValue("operator");
                System.out.println(operator);
                int operand2 = Integer.parseInt(queryStrings.getValue("operand2"));

                int result = Calculator.calculate(new PositiveNumber(operand1), operator, new PositiveNumber(operand2));
                byte[] body = String.valueOf(result).getBytes();

                HttpResponse response = new HttpResponse(dos);
                response.respense200Header("application/json", body.length);
                response.respenseBody(body);
                // 톰캣을 만들어 보는 이유, HTTPRequest를 구현해서, 어떻게 돌아가는지 알아야 함.
            }
        } catch (IOException e) {
            throw new RuntimeException(e);
        }
    }
}
