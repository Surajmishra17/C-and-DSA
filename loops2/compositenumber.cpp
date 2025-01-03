#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    bool flag = true;  //true means prime
    for (int i = 2; i <=n-1 ; i++)
    {   if(n%i==0){ // i is a factor of n
           flag = false; //false means composite number
            break;
    }
    }
    if (n==1) cout<<"1 is niether prime nor composite";
    if (flag==true) cout<<n<<" is prime";
    else cout<<n<<" is composite";
}