#include<iostream>
using namespace std;

private:
    
    string color;
    string make;
public:
    
    Automobile(){
        color="red";
        make = "Chevy";
    }
    
    string getColor(){
        return color;
    }
    
    string getMake(){
        return make;
    }
    
    void setColor(string color)
    {
        this->color=color;
    }

    void setMake(string make)
    {
        this->make=make;
    }



int main()
{
    Automobile Myauto = Automobile();
    MyAuto.setColor("Blue");
    cout << MyAuto.getColor() << endl;
    //count << MyAuto.color << endl

    return 0
}    