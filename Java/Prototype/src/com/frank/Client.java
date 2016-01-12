package com.frank;

public class Client {

	private Prototype prototype;

	public Client(Prototype prototype){
		this.prototype = prototype;
	}

	public void operation() {
        Prototype newPrototype = prototype.clone();
    }

    public static  void main(String[] args){
        ConcretePrototype1 type1 = new ConcretePrototype1();
        Client cl = new Client(type1);
        cl.operation();
        return;
    }
}