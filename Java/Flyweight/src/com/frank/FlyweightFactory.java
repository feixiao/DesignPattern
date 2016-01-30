package com.frank;

import java.util.HashMap;
import java.util.Map;

/**
 * Created by frank on 2016/1/30.
 */
public class FlyweightFactory {
    private Map<String,Flyweight> fsMap = new HashMap<String, Flyweight>();

    public Flyweight getFlyweight(String key) {
        Flyweight f = fsMap.get(key);

        if (null == f){
            f = new ConcreteFlyweight(key);
            fsMap.put(key,f);
        }else {
            System.out.println(key +" already created by users");
        }
        return f;
    }
}
