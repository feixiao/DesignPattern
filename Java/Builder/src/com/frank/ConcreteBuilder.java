package com.frank;
public class ConcreteBuilder implements Builder {

	private Product resultProduct;

	public Product getResult() {
		return resultProduct;
	}

	public void buildPart() {
        resultProduct = new ProductA();
        resultProduct.Build();
	}
}