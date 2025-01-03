#include<iostream>
using namespace std;
void strtriangle(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return;
}
int main(){
    strtriangle(3);
    strtriangle(4);
    strtriangle(5);
}