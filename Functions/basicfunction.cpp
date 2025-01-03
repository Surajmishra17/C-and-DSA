#include<iostream>
using namespace std;
void starTriangle(int x){
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}
int main (){
    int a,b,c;
    cin>>a>>b>>c;
   starTriangle(a);
   starTriangle(b);
   starTriangle(c);
}