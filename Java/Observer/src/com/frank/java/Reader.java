package com.frank.java;


import java.util.Observable;

public class Reader implements java.util.Observer {
    private String name;

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void update(Observable o, Object obj) {
        System.out.println(name + " === " + obj);
        System.out.println(name + " === " + ((NewsPaper)o).getContent());
    }
}
