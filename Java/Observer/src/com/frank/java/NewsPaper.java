package com.frank.java;


public class NewsPaper extends  java.util.Observable {
    private String content;


    public String getContent() {
        return content;
    }

    public void setContent(String content) {
        this.content = content;
        this.setChanged();
        this.notifyObservers(this.content);
    }
}
