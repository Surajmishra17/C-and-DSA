#include<iostream>
using namespace std;
class Bike{
public:
    static int noOfBikes; // this belong to  the class
    int tyreSize;
    int engineSize;

    Bike(int tyreSize, int engineSize){
        this->tyreSize = tyreSize;
        this->engineSize = engineSize;
    }

    //Bike (int tS, int eS=200) : tyreSize(ts), engineSize(es){}
    
    static void increaseNumberofBikes(){
        noOfBikes++;
    }
};
int Bike::noOfBikes = 10;
// void print(){
//     static int b = 10;
//     cout<<b<<endl;
//     b++;
// }
int main(){
    Bike royalEngield(15,350);
    Bike bajaj(13,250); 
    cout<<royalEngield.noOfBikes<<endl;
    royalEngield.increaseNumberofBikes();
    cout<<bajaj.noOfBikes<<endl;
    // print();
    // print();
    // print();
}