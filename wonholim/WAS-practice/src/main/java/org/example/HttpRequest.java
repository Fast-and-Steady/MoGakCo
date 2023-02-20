package org.example;

import java.io.BufferedReader;
import java.io.IOException;

public class HttpRequest {
    private final RequestLine requestLine;

//    private final HttpHeaders httpHeaders;
//
//    private final Body body;

    public HttpRequest(BufferedReader br) throws IOException {
        this.requestLine = new RequestLine(br.readLine()); // 전달 받은 request line을 보내준다.
    }

    public QueryStrings getQueryString() {
        return requestLine.getQueryString();
    }

    public boolean isGetRequest() {
        return requestLine.isGetRequest();
    }

    public boolean matchPath(String requestPath) {
        return requestLine.matchPath(requestPath);
    }
}
