package com.frank;

public class ConcretePrototype2 implements Prototype {
	public Prototype clone() {
		Prototype prototype = new ConcretePrototype2();
		System.out.println("ConcretePrototype2 clone()");
		return prototype;
	}
}