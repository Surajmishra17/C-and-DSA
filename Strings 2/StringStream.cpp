#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string s = "suraj     is a king";
    stringstream ss{s};
    string temp;

    while (ss>>temp)
    {
        cout<<temp<<endl;
    }
    
}