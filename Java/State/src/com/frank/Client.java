package com.frank;

/**
 * Created by frank on 2016/1/30.
 */
public class Client {
    public static  void main(String[] args) {
        State state = new ConcreteStateA();
        Context context = new Context();
        context.setState(state);
        context.request("AAA");
    }
}
