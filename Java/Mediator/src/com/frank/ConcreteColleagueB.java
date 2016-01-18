package com.frank;

public class ConcreteColleagueB extends Colleague {
	public ConcreteColleagueB(Mediator mediator) {
		super(mediator);
	}
	public void someOperation() {
		getMediator().changed(this);
	}

	@Override
	public void say() {
		System.out.println("ConcreteColleagueB " + happyNow());
	}
}

