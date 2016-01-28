package com.frank;

public class Invoker {
    private Command command = null;

    public void setCommand(Command command) {
        this.command = command;
    }


    public void runCommand() {
        command.execute();
    }
}
