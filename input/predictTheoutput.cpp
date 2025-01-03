#include<iostream>
using namespace std;
int main() {
    bool p = false;
    bool q = false;
    bool r = true;
    cout<<(p==q==r)<<endl;   // goes from left to right

    char ch='0';
    cout<<(int)ch;
}