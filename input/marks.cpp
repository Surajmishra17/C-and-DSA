#include<iostream>
using namespace std;
int main(){
   cout<<"Enter marks : ";
   int n;
   cin>>n;
   if(n>=91){
    cout<<"Excellent";
   }
   else{
    if(n>=81){
        cout<<"Very good";
    }
    else{
        if(n>=71){
            cout<<"Good";
        }
        else{
            if(n>=61){
                cout<<"Can do better";
            }
            else{
                if(n>=51){
                    cout<<"Average";
                }
                else{
                    if(n>=41){
                        cout<<"Below Average";
                    }
                    else{
                        if(n<41){
                            cout<<"failed";
                       }
                    }
                }
            }
        }
     }
   }
}