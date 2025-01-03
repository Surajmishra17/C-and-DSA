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
private:  // can not be access can not be inherited
    int a_ka_private;
protected:  // can not be accessed but can be inherited
    int a_ka_protected; 
public:  // can be accessed can be inherited
    int a_ka_public;    
    A(){
        cout<<"A ka constructor call hua"<<endl;
    }
};

class B : protected A{  // a_ka_protected, a_ka_public
public:    
    int b_ka_public;
    B(){
        cout<<"B ka constructor call hua"<<endl;
    }
};

class C : public B, public A{  // multilevel innheritance
public:   // b_ka_public is public, a_ka_protected, a_ka_public as protected
    int c_ka_public;
    C(){
        cout<<"C ka constructor call hua"<<endl;
    }
};

int main(){ // parent ka objecct banta hai lekin backend me
    C c;
}