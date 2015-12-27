package com.frank;

/**
 * Created by frank on 2015/12/27.
 */
public class Facade {
    public void test(){
        AModuleApi a = new AModuleImpl();
        a.testA();

        BModuleApi b = new BModuleImpl();
        b.testB();

        CModuleApi c = new CModuleImpl();
        c.testC();
    }
}
