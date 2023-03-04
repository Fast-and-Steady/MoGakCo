package org.example;

import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

import java.io.*;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.concurrent.Executor;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

public class CustomWebApplicationServer {
    private final int port;

    private final ExecutorService executorService = Executors.newFixedThreadPool(10);
    // ThreadPool을 이용해서 안정적으로 구현하는 것.
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

                executorService.execute(new ClientRequestHandler(clientSocket));
                // 위와같이 구현하면, 안정적인 Thread풀을 이용할 수 있다.
//                new Thread(new ClientRequestHandler(clientSocket)).start();
                // 위와 같이 구현할 때, 발생할 이슈, 사용자가 요청이 들어올 때마다, 쓰레드를 새로 생성하기 때문에 (독립적인 스텍 영역을 할당, 메모리할당은 비싼것.)
                // 쓰레드를 관리해야 한다.
                // CPU 컨테스트 스위칭 횟수 증가
                // CPU 메모리 사용량 증가
                // 최악의 경우 서버의 리소스가 감당되지 못해서 서버가 다운이 된다.
                // 쓰레드 풀을 적용하여, 안정적인 관리가 잘 되도록 한다.
                // go to step 3: make Thread Pool
                // 쓰레드 풀을 이용하여, 쓰레드를 활용하는 부분과, HTTP의 헤더 바디, response를 구현하고, 톰켓을 구현한 점.
                // 실제로 개발자가 구현을 하는 경우는 많지 않지만, 한번 해보는 것도 좋다.
                // dispatcher servlet? 
                //Thread 구현
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

                    // step 2 : class를 판다.

                // Main Thread가 블럭킹이 된다면, 요청을 받지 못하는 교착상태가 된다.
            }
        }
    }
}
