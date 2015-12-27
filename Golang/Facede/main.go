package main 

import "log"


// AModule
type AModuleApi interface{
	TestA()
}

type AModuleImpl struct {

}

func(this *AModuleImpl) TestA(){
	log.Println("AModuleImpl TestA")
}

// BModule 
type BModuleApi interface{
	TestB()
}

type BModuleImpl struct {

}

func(this *BModuleImpl) TestB(){
	log.Println("BModuleImpl TestB")
}

// CModule 
type CModuleApi interface{
	TestC()
}

type CModuleImpl struct {

}

func(this *CModuleImpl) TestC(){
	log.Println("CModuleImpl TestC")
}

// Facede 

type Facede struct {

}


func (this *Facede) Test() {
	var a AModuleApi = new(AModuleImpl)
	a.TestA()
	var b BModuleApi = new(BModuleImpl)
	b.TestB()
	var c CModuleApi = new(CModuleImpl)
	c.TestC()
}


// Client
func main() {
	var facede Facede
	facede.Test()
}