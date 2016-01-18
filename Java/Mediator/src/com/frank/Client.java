package com.frank;

public class Client {
   public static  void main(String[] args){
       ConcreteMediator m = new ConcreteMediator();
       ConcreteColleagueA ca = new ConcreteColleagueA(m);
       ConcreteColleagueB cb = new ConcreteColleagueB(m);
       m.setConcreteColleagueA(ca);
       m.setConcreteColleagueB(cb);
       System.out.println("Happy or Unhappy");
       ca.say();
       cb.say();

       System.out.println("ca & cb is different");
       ca.someOperation();
       ca.say();
       cb.say();

       System.out.println("ca & cb is different");
       ca.setHappy(true);
       ca.say();
       cb.someOperation();
       ca.say();
       cb.say();
   }
}
