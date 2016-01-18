package main

import (
	"log"
)

type AbstractFactory interface {
	CreateProductA() AbstractProductA
	CreateProductB() AbstractProductB
}

type AbstractProductA interface {
	DoSomething() //string
}

type AbstractProductB interface {
	DoSomething() //string
}

type ProductA struct {
	name string
}

func NewProductA() *ProductA {
	var prd ProductA
	prd.name = "ProductA"
	return &prd
}

func (this *ProductA) DoSomething() {
	log.Println(this.name)
}

type ProductB struct {
	name string
}

func NewProductB() *ProductB {
	var prd ProductB
	prd.name = "ProductB"
	return &prd
}

func (this *ProductB) DoSomething() {
	log.Println(this.name)
}

type ConcreteFactory1 struct {
}

func NewConcreteFactory1() *ConcreteFactory1 {
	var factory ConcreteFactory1
	return &factory
}
func (this *ConcreteFactory1) CreateProductA() AbstractProductA {
	return NewProductA()
}

func (this *ConcreteFactory1) CreateProductB() AbstractProductB {
	return NewProductB()
}

func main() {
	af := NewConcreteFactory1()
	a := af.CreateProductA()
	b := af.CreateProductB()
	a.DoSomething()
	b.DoSomething()
}
