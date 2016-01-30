package com.frank;

/**
 * Created by frank on 2016/1/30.
 */
public class ConcreteStateA implements State {
    @Override
    public void handle(String para) {
        System.out.println("ConcreteStateA handle:" + para);
    }
}
