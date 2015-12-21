package com.frank;

/**
 * Created by frank on 2015/12/21.
 */
public class Factory {
    public static Api createApi(int condition){
        Api api = null;
        if (condition == 1){
            api = new ImplA();
        }else if (condition == 2){
            api = new ImplB();
        }
        return api;
    }
}
