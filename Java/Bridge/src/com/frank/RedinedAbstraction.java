package com.frank;

/**
 * Created by frank on 2016/2/1.
 */
public class RedinedAbstraction extends Abstraction {
    public RedinedAbstraction(Implementor implementor){
        super(implementor);
    }

    public void otherOperation() {
        System.out.println("RedinedAbstraction otherOperation");
    }
}
