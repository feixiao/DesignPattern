package main
                                               
import (
    "log"
)
                                               
type Singleton struct {
    text string
}
                                               
var oneSingleton *Singleton
                                               
func NewSingleton(text string) *Singleton {
    if oneSingleton == nil {
        oneSingleton = &Singleton{
            text: text,
        }
    }
    return oneSingleton
}
                                               
func (this *Singleton) SaySomething() {
    log.Println(this.text)
}


// for Client
func main() {
    mSingleton, nSingleton := NewSingleton("hello"), NewSingleton("hi")
    mSingleton.SaySomething()
    nSingleton.SaySomething()

    // 存在的问题,不使用NewSingleton方法创建的对象无法控制
    var singleton Singleton
    singleton.SaySomething()
}
