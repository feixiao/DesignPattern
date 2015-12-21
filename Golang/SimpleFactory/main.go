package main

import	(
	"log"
)

type Api interface {
	Operation(str string)
}


type ImplA struct {

}

func (this *ImplA) Operation(str string){
	log.Println("ImplA == "+ str)
}


type ImplB struct {

}

func (this *ImplB) Operation(str string){
	log.Println("ImplB == "+ str)
}

func CreateApi(cond int) Api {
	if cond == 1 {
		return &ImplA{}
	}else if cond == 2 {
		return &ImplB{}
	}else {
		return nil
	}
}


func main(){
	api := CreateApi(1)
	api.Operation("正在使用简单工厂模式")
}