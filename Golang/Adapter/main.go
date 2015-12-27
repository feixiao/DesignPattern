package main 

import (
	"log"
	"fmt"
	"runtime"	
)

/**
 * 客户接口	
 */
type Target interface{
	Request()
}

/**
 * 需要被适配者	
 */
type Adaptee struct{

}

// 输出调用该函数的函数的消息(即上一层调用)
func PrintCallFunc(){
	pc, _, lineno, ok := runtime.Caller(1)
	src := ""
	if ok {
		src = fmt.Sprintf("%s:%d", runtime.FuncForPC(pc).Name(), lineno)
	}
	log.Println(src)
}

func (this *Adaptee) SpecificRequest(){
	PrintCallFunc()
}

/**
 * 适配者	
 */
type Adapter struct {
	adaptee *Adaptee
}

func NewAdapter(adaptee *Adaptee) *Adapter{
	if adaptee == nil {
		panic("adaptee == nil")
		return nil
	}

	var adapter  Adapter
	adapter.adaptee = adaptee
	return &adapter
}
func (this *Adapter)Request() {
	if this.adaptee != nil {
		this.adaptee.SpecificRequest()
	}
}

func main() {
	adaptee := new(Adaptee) 
	var target Target = NewAdapter(adaptee)
	target.Request()
}
