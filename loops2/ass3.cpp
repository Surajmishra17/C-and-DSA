#include<iostream>
using namespace std;
int main () {
   int n;
   cout<<"Enter the number n : ";
   cin>>n;
//    int sum = 0;
//    while (n > 0)
//    {
//     int x = n % 10;
//     sum += (x%2==0 ? x : 0);
//     n /= 10;
//    }
//    cout<<sum;
    int main = n , x=0;
    while (main>0)
    {
        x *= 10;
        x += (main % 10);
        main /= 10;
    }
    cout<<n + x <<endl;
}