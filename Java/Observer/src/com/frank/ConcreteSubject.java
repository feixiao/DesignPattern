package com.frank;

public class ConcreteSubject extends Subject {

    private String subjectState;
    public String getSubjectState() {
        return subjectState;
    }

    public void setSubjectState(String subjectState) {
        System.out.println("setSubjectState: " + subjectState);
        this.subjectState = subjectState;
        this.notifyObservers();
    }
}
