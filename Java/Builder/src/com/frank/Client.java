package com.frank;


public class Client {

    public static void main(String[] args){
        Director d = new Director(new ConcreteBuilder());
        d.construct();
        return;
    }
}
