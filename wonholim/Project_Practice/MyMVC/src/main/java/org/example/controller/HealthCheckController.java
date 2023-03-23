package org.example.controller;

import org.example.annotaion.Controller;
import org.example.annotaion.RequestMapping;
import org.example.annotaion.RequestMethod;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
@Controller
public class HealthCheckController {
        @RequestMapping(value = "/health", method = RequestMethod.GET)
        public String home(HttpServletRequest request, HttpServletResponse response){
            return "OK";
        }
}

