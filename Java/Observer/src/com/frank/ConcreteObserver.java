package com.frank;

public class ConcreteObserver implements Observer {
    private String observerState;
    public void update(Subject subject) {
        observerState = ((ConcreteSubject) subject).getSubjectState();
        System.out.println("setSubjectState: " + observerState);
    }
}
