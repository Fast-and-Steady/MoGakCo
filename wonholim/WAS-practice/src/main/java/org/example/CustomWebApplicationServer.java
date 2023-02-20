package org.example;

import org.example.caculator.domain.Calculator;
import org.example.caculator.domain.PositiveNumber;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

import java.io.*;
import java.net.ServerSocket;
import java.net.Socket;
import java.nio.charset.StandardCharsets;

public class CustomWebApplicationServer {
    private final int port;

    private static final Logger logger = LoggerFactory.getLogger(CustomWebApplicationServer.class);
    public CustomWebApplicationServer(int port) {
        this.port = port;
    }


    public void start() throws IOException {
        try(ServerSocket serverSocket = new ServerSocket(port)){
            logger.info("[CustomWebApplicationServer] starting {} port.", port);

            Socket clientSocket;
            logger.info("[CustomWebApplicationServer] waiting for client.");

            while((clientSocket = serverSocket.accept()) != null){
                logger.info("[CustomWebApplicationServer] client connected!");

                //Thread 구현
                try(InputStream in = clientSocket.getInputStream(); OutputStream out = clientSocket.getOutputStream()){
                    BufferedReader br = new BufferedReader(new InputStreamReader(in, StandardCharsets.UTF_8));
                    DataOutputStream dos = new DataOutputStream(out);
                    /*
                    * GET / HTTP/1.1
                      Host: localhost:8080
                      Connection: Keep-Alive
                      User-Agent: Apache-HttpClient/4.5.13 (Java/17.0.5)
                      Accept-Encoding: br,deflate,gzip,x-gzip
                    * */
//                    String line;
//                    while((line = br.readLine()) != ""){
//                        System.out.println(line);
//                    }
                    /*
                    * 우린 Custom한 톰캣을 만드는 것이다. (WAS라고 함.)
                    * */
                    /*GET /calculate?operand1=11&operator=*&operand2=55 HTTP/1.1을 파싱해야함.
                    * */
                    HttpRequest httpRequest = new HttpRequest(br);

                    if(httpRequest.isGetRequest() & httpRequest.matchPath("/calculate")) {
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
                }
            }
        }
    }
}
