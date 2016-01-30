package com.frank;

/**
 * Created by frank on 2016/1/30.
 */
public class Client {
    public static  void main(String[] args) {
        AbstractClass a1 = new ConcreteClass1();
        AbstractClass a2 = new ConcreteClass2();

        a1.templateMethod();
        a2.templateMethod();


    }
}
