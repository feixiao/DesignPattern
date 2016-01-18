package com.frank;

public class ConcreteMediator implements Mediator {

	private ConcreteColleagueA colleagueA;

	private ConcreteColleagueB colleagueB;
	

	public void setConcreteColleagueA(ConcreteColleagueA colleague) {
		colleagueA = colleague;
	}

	public void setConcreteColleagueB(ConcreteColleagueB colleague) {
		colleagueB = colleague;
	}
	
	public void changed(Colleague colleague) {
		if (colleague == colleagueA){
			colleagueB.setHappy(!colleague.isHappy());
		}else {
			colleagueA.setHappy(!colleague.isHappy());
		}
	}

}
