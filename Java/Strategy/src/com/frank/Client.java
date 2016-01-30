package com.frank;

/**
 * Created by frank on 2016/1/30.
 */
public class Client {
    public static void main(String[] args) {
        Strategy strategy = new ConcreteStrategyA();
        Context context = new Context(strategy);
        context.contextInterface();
    }
}
