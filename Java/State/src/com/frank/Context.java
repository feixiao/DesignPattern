package com.frank;

/**
 * Created by frank on 2016/1/30.
 */
public class Context {
    private State state;

    public void setState(State state) {
        this.state = state;
    }

    public void request(String para) {
        state.handle(para);
    }
}
