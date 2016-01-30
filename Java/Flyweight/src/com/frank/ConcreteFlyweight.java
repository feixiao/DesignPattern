package com.frank;

/**
 * Created by frank on 2016/1/30.
 */
public class ConcreteFlyweight implements Flyweight {

    private String state;
    public  ConcreteFlyweight(String state) {
        this.state = state;
    }

    @Override
    public void operation(String para) {
        System.out.println("ConcreteFlyweight: " + state);
    }
}
