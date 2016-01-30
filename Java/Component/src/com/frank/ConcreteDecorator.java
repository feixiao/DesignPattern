package com.frank;

/**
 * Created by frank on 2016/1/30.
 */
public class ConcreteDecorator extends Decorator {

    public ConcreteDecorator(Component component) {
        super(component);
    }

    private void addBehavior() {
        System.out.println("ConcreteDecorator addBehavior");
    }

    @Override
    public void operation() {
        super.operation();
        this.addBehavior();
    }
}
