#include<iostream>
using namespace std;
class Bike{
public:
    int tyreSize;
    int engineSize;
    // default constructor
    // values intialize karo
    Bike(int tyreSize, int engineSize){
        this->tyreSize = tyreSize;
        this->engineSize = engineSize;
    }
};
int main(){
    Bike tvs(12,100);// object creation // constructor ko call lagegi
    Bike honda(13,150);
    Bike royalEngield(15,350);
    cout<<tvs.tyreSize<<" "<<tvs.engineSize<<endl;
    cout<<honda.tyreSize<<" "<<honda.engineSize<<endl;
    cout<<royalEngield.tyreSize<<" "<<royalEngield.engineSize<<endl;
}