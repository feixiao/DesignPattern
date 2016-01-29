package com.frank;

/**
 * Created by frank on 2016/1/29.
 */
public class Client {
    public static  void main(String[] args){
        String[] names = {"AAA","BBB","CCC"};
        Aggregate aggregate = new ConcreteAggregate(names);
        Iterator it = aggregate.createIterator();

        it.first();
        while (!it.isDone()){
            Object obj = it.currentItem();
            System.out.println("the obj + "+obj);
            it.next();
        }
    }
}
