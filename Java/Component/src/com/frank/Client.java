package com.frank;

/**
 * Created by frank on 2016/1/30.
 */
public class Client {
    public static  void main(String[] args) {
        Component component = new ConcreteComponent();
        Decorator decorator = new ConcreteDecorator(component);

        decorator.operation();

    }
}
