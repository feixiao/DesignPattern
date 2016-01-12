package com.frank;

public class ProductA implements Product {
    @Override
    public void Build() {
        String clsName = this.getClass().getName();
        System.out.println(clsName + " build...");
    }
}
