package com.frank;

/**
 * Created by frank on 2016/2/1.
 */
public class Client {
    public static void main(String[] args){
        Implementor imp = new ConcreteImplementorA();
        Abstraction abs = new RedinedAbstraction(imp);
        abs.operation();
    }
}
