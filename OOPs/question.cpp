#include<iostream>
using namespace std;
class book{
    public:
    char name;
    int price;
    int noOfpages;

    int countBooks(int p){
        if(price<p) return 1;
        else return 0;
    }
    bool isBookPresent(char book){
        if(name==book) return true;
        else return false;
    }
};
int main(){
    book harryPotter;
    harryPotter.name='H';
    harryPotter.price=100;
    harryPotter.noOfpages=500;
    cout<<harryPotter.isBookPresent('B');
}