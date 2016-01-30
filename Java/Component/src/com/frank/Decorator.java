package com.frank;

/**
 * Created by frank on 2016/1/30.
 */
public abstract class Decorator  extends Component {
    protected Component component;

    public Decorator(Component component) {
        this.component = component;
    }

    public void operation() {
        // 在执行请求给component时执行其他命令
        System.out.println("Decorator operation");
        component.operation();
    }

}
