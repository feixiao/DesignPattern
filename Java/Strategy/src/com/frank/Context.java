package com.frank;

/**
 * Created by frank on 2016/1/30.
 */
public class Context {
    private Strategy strategy;

    public Context(Strategy strategy) {
        this.strategy = strategy;
    }

    public void contextInterface() {
        strategy.algrithmInterface();
    }
}
