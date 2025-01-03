#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    //rows -> 3 0-2
    //column -> 3 0-2
    cout<<arr[1][2];
    //column dena jruri hai
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}