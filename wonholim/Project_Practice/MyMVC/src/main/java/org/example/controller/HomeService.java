package org.example.controller;

import org.example.annotaion.RequestMapping;
import org.example.annotaion.RequestMethod;
import org.example.annotaion.Service;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

@Service
public class HomeService {
    @RequestMapping(value = "/", method = RequestMethod.GET)
    public String home(HttpServletRequest request, HttpServletResponse response){
        return "Service";
    }
}
