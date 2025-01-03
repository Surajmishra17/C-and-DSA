#include <iostream>
using namespace std;
int main()
{
    int a = 14; // a means dividend
    int b = 3;  // b is divisor
    // int r;      // r means remainder
    // int q = a / b;
    // r = a - (b * q);
    int r = a % b; // remainder when a is divided by b
    cout << r<<endl;

    float x1 = 91;
    float x2 = 91;
    float x3 = 92;
    float x4 = 93;
    float x5 = 94;
    float percent = ( x1 + x2 + x3 + x4+ x5)/5;
    cout <<percent<<endl;

    // area of a circle
    float radius = 5;
    float pi = 3.1415;
    float area = pi*radius*radius;
    cout<<area;

}