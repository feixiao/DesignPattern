package com.frank;

/**
 * Created by frank on 2016/1/30.
 */
public class Client {
    public static void main(String[] args) {
        FlyweightFactory f = new FlyweightFactory();
        Flyweight fly1 = f.getFlyweight("AAA");
        Flyweight fly2 = f.getFlyweight("BBB");
        Flyweight fly3 = f.getFlyweight("CCC");
        Flyweight fly4 = f.getFlyweight("AAA");
    }
}
