package com.frank;

import java.util.ArrayList;
import java.util.List;

/**
 * Created by frank on 2016/1/29.
 */
public class Composite extends Component {

    private List<Component> childComponents = null;

    @Override
    public void someOperation() {
        System.out.println("Composite...");
        if (null != childComponents) {
            for (Component c: childComponents) {
                c.someOperation();
            }
        }
    }

    public void addChild(Component c) {
        if (null == childComponents) {
            childComponents = new ArrayList<Component>();
        }
        childComponents.add(c);
    }

    public void removeChild(Component c) {
        if (null == childComponents) {
            childComponents.remove(c);
        }
    }

    public Component getChildren(int index) {
        if (null != childComponents) {
            if (index >= 0 && index < childComponents.size()) {
                return childComponents.get(index);
            }
        }
        return null;
    }
}
