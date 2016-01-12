package com.frank;


public class ProductA2 implements AbstractProductA {
    @Override
    public String doSomething() {
        String clsName = this.getClass().getName();
        System.out.println(clsName + " doSomething");
        return clsName;
    }
}

