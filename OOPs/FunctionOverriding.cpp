#include<iostream>
#include<string>
using namespace std; 
class Vehicle{
public:
    int tyreSize;
    int engineSize;
    virtual void calculateMileage() = 0;
    virtual void refuel() = 0;
};

class Bike : public Vehicle{ // bike inherits vehicle
public:
    int handleSize;
    void show(){
        cout<<"Bike ka show"<<endl;
    }
    void calculateMileage(){
        cout<<"Bike ka mileage"<<endl;
    }
    void refuel(){
        cout<<"Bike ka refuel"<<endl;
    }
};
   
int main(){ // complier pov vehicle typr hai stored in stack memory
    // runtime pov bike ka address hai
    // without virtual complier time binnding
    // with virtual runtime binding stored in heep memory
    Bike b;
    b.calculateMileage(); 
}