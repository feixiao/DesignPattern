package com.frank.java;

/**
 * Created by frank on 2016/1/27.
 */
public class Client {
    public  static void  main(String[] args) {
        NewsPaper subject = new NewsPaper();
        Reader reader1 = new Reader();
        reader1.setName("AAA");

        Reader reader2 = new Reader();
        reader2.setName("BBB");

        Reader reader3 = new Reader();
        reader3.setName("CCC");

        subject.addObserver(reader1);
        subject.addObserver(reader2);
        subject.addObserver(reader3);

        subject.setContent("本期观察者");
    }
}
