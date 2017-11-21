#include <iostream>


// g++ -Wall ex01.cpp -o ex01

using namespace std;

class Switch 
{
public:
    virtual void Clicked() = 0;
};

class Light
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

class ToggleSwitch : public Switch
{
public:
    explicit ToggleSwitch(Light& lp): m_lp(lp){
    }

    virtual void Clicked()
    {
        m_lp.ToggleState();
    }
private:
    Light& m_lp;
};

int main() {
    Light lp1, lp2;
    ToggleSwitch tsw1(lp1), tsw2(lp2);
    tsw1.Clicked();  
    tsw2.Clicked();
}