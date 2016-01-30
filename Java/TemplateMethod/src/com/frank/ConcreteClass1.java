package com.frank;

/**
 * Created by frank on 2016/1/30.
 */
public class ConcreteClass1 extends AbstractClass {

    @Override
    public void doPrimitiveOperation1() {
        System.out.println("ConcreteClass1::doPrimitiveOperation1()");
    }

    @Override
    public void doPrimitiveOperation2() {
        System.out.println("ConcreteClass1::doPrimitiveOperation2()");
    }
}
