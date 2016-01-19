package com.frank;

public class Proxy implements Subject{

	private RealSubject realSubject=null;

	public Proxy(RealSubject realSubject){
		this.realSubject = realSubject;
	}
	
	public void request() {
		System.out.println("Proxy::request");
		realSubject.request();
	}
}
