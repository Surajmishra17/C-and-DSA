#include<iostream>
#include<string>
using namespace std;
class Vehicle{
public:
    int tyreSize;
    int engineSize;
    int lights;
    string companyName;
    Vehicle(){
        cout<<"Vehicle constructor"<<endl;
    }
    void showCompany(){
        cout<<companyName<<endl;
    }
};

class Car : public Vehicle{ // car inherits vehicle
public:
    int steeringSize;
};

class Bike : public Vehicle{ // bike inherits vehicle
public:
    int handleSize;
    Bike(){
        cout<<"Bike constructor"<<endl;
    }
};

class A{
private:  
    int a_ka_private;
protected:  
    int a_ka_protected; 
public:  
    int a_ka_public;    
    A(){
        cout<<"A ka constructor call hua"<<endl;
    }
};

class B : virtual public A{  
public:    
    int b_ka_public;
    B(){
        cout<<"B ka constructor call hua"<<endl;
    }
};

class C : virtual public A{ 
public:  
    int c_ka_public;
    C(){
        cout<<"C ka constructor call hua"<<endl;
    }
};

class D : public B, public C{
public:
    int d_ka_public;
    void show(){
        cout<<"D ka constructor"<<endl;
    }
};

int main(){ 
    D d;
}