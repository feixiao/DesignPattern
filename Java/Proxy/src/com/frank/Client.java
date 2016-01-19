package com.frank;

public class Client {
    public static void main(String[] args) {
        RealSubject sub = new RealSubject();
        Proxy proxy = new Proxy(sub);
        proxy.request();
    }
}
