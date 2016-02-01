package com.frank;

/**
 * Created by frank on 2016/2/1.
 */
public abstract class Abstraction {
    protected Implementor implementor;
    public Abstraction(Implementor implementor) {
        this.implementor = implementor;
    }

    public void operation() {
        this.implementor.operationImpl();
    }
}
