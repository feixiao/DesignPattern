package com.frank;

/**
 * Created by frank on 2016/1/29.
 */
public class ConcreteAggregate extends Aggregate {


    private String[] ss = null;

    public ConcreteAggregate(String[] ss ) {
        this.ss = ss;
    }


    @Override
    public Iterator createIterator() {
        return new ConcreteIterator(this);
    }

    public int size() {
        return this.ss.length;
    }

    public Object get(int index) {
        Object obj = null;
        if (index < ss.length) {
            obj = ss[index];
        }
        return obj;
    }
}
