#include<iostream>
using namespace std;
int main(){
   string str = "soraj";
   cout<<str<<endl;
//    str[1]='u';
   for (int i = 0; str[i]!=0; i++)
   {
    if(i%2==0) str[i]='a';
   }
   
   cout<<str<<endl;
} 