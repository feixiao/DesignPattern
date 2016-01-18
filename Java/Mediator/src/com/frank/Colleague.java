package com.frank;

public abstract class Colleague {

	private Mediator mediator;

	public Colleague(Mediator mediator) {
		this.mediator = mediator;
	}

	public Mediator getMediator() {
		return mediator;
	}

    private boolean isHappy;

    public boolean isHappy() {
        return isHappy;
    }

    public void setHappy(boolean happy) {
        isHappy = happy;
    }

    public String happyNow() {
       return isHappy ? "Happy" : "Unhappy";
    }

    public abstract  void say();
}