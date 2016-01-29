package com.frank;

/**
 * Created by frank on 2016/1/29.
 */
public class Client {
    public static void main(String[] args) {
        Component root = new Composite();
        Component c1 = new Composite();
        Component c2 = new Composite();

        Component leaf1 = new Leaf();
        Component leaf2 = new Leaf();
        Component leaf3 = new Leaf();

        root.addChild(c1);
        root.addChild(c2);
        root.addChild(leaf1);

        c1.addChild(leaf2);
        c2.addChild(leaf3);

        Component o = root.getChildren(1);
        o.someOperation();
        System.out.println(o);

        root.getChildren(0).someOperation();

        root.getChildren(2).someOperation();

        //System.out.println(root.getChild(0));

    }
}
