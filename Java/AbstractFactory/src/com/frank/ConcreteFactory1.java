package com.frank;

public class ConcreteFactory1 implements AbstractFactory {

	public AbstractProductA createProductA() {
		return new ProductA1();
	}
	public AbstractProductB createProductB() {
		return new ProductB1();
	}

}

