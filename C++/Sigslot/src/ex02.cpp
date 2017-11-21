#include <iostream>
#include "sigslot.h"


using namespace std;

// g++ -Wall ex02.cpp -o ex02
class Switch 
{
public:
    sigslot::signal0<> Clicked;
};

class Light : public sigslot::has_slots<>
{
public:
    void ToggleState(){
        std::cout<<__FUNCTION__<<std::endl;
    }
    void TurnOn(){
        std::cout<<__FUNCTION__<<std::endl;
    }
    void TurnOff(){
         std::cout<<__FUNCTION__<<std::endl;
    }
};

int main() {
    Switch sw1, sw2;
    Light lp1, lp2;

    // 绑定
    sw1.Clicked.connect(&lp1, &Light::ToggleState);
    sw2.Clicked.connect(&lp2, &Light::TurnOn);

    // 执行
    sw1.Clicked();
    sw2.Clicked();

    Switch all_on;

    //　关联多个
    all_on.Clicked.connect(&lp1,&Light::TurnOn);
    all_on.Clicked.connect(&lp2,&Light::TurnOn);

    all_on.Clicked();
}