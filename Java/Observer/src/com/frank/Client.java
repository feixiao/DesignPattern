package com.frank;

/**
 * Created by frank on 2016/1/25.
 */
public class Client {
    public static void main(String[] args) {
        ConcreteSubject sub = new ConcreteSubject();
        ConcreteObserver o1 = new ConcreteObserver();
        ConcreteObserver o2 = new ConcreteObserver();

        sub.attach(o1);
        sub.attach(o2);

        sub.setSubjectState("AAA");
        sub.setSubjectState("BBB");

        sub.detach(o1);
        sub.setSubjectState("CCC");

        sub.detach(o2);
        sub.setSubjectState("DDD");

        sub.setSubjectState("EEE");
    }
}
