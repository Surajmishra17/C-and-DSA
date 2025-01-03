#include<iostream>
using namespace std;
class Bike{
public:
    int tyreSize;
    int engineSize;

    Bike(int tyreSize, int engineSize){
        this->tyreSize = tyreSize;
        this->engineSize = engineSize;
    }

    //Bike (int tS, int eS=200) : tyreSize(ts), engineSize(es){}
    Bike(int tS) : tyreSize(tS), engineSize(10){}
    Bike() : tyreSize(12),engineSize(100){}
};
void add(int a, int b){
    cout<<a+b<<endl;
}
void add(int a){
    cout<<10+a<<endl;
}
int main(){
    // Bike royalEngield(15,350);
    // Bike bajaj(13,250); 
    // cout<<royalEngield.noOfBikes<<endl;
    // cout<<bajaj.noOfBikes<<endl;
    add(1,2);
    add(5);
}