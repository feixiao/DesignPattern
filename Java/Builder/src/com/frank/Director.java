package com.frank;
public class Director {
	private Builder builder;

	public Director(Builder builder) {
		this.builder = builder;
	}

	public void construct() {

		builder.buildPart();
	}
}