package com.frank;

public class Client {

	public static void main(String[] args) {
		AbstractFactory af = new ConcreteFactory1();
		AbstractProductA a = af.createProductA();
        AbstractProductB b = af.createProductB();
        a.doSomething();
        b.doSomething();

        af = new ConcreteFactory2();
        a = af.createProductA();
        b = af.createProductB();
        a.doSomething();
        b.doSomething();
	}
}
