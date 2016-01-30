package com.frank;

/**
 * Created by frank on 2016/1/30.
 */
public abstract class  AbstractClass {
    public abstract void doPrimitiveOperation1();

    public abstract void doPrimitiveOperation2();

    public final void templateMethod() {
        doPrimitiveOperation1();
        doPrimitiveOperation2();
    }

}
