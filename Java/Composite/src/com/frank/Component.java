package com.frank;

/**
 * Created by frank on 2016/1/29.
 */
public abstract class Component {
    // 子组件对象可能有的功能方法
    public abstract void someOperation();

    public void addChild(Component child) {
        throw new UnsupportedOperationException();
    }

    public void removeChild(Component child) {
        throw new UnsupportedOperationException();
    }

    public Component getChildren(int index) {
        throw new UnsupportedOperationException();
    }
}
