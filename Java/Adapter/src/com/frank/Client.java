package com.frank;

/**
 * Created by frank on 2015/12/27.
 */
public class Client {

    public static void main(String[] args){
        Adaptee adaptee = new Adaptee();
        Target target = new Adapter(adaptee);
        target.request();
    }
}
