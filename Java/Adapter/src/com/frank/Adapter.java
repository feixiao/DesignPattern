package com.frank;

/**
 * Created by frank on 2015/12/27.
 */

/**
 *  适配器
 */

public class Adapter implements Target {

    public  Adapter(Adaptee adaptee) {
        this.adaptee = adaptee;
    }

    // 进行适配
    public void request(){
        this.adaptee.specificRequest();
    }

    // 持有被适配者对象
    private Adaptee adaptee;
}
