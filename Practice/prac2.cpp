#include <bits/stdc++.h>
using namespace std;
int main() {
	int T;
	cin>>T;
	int N,K,X;
	cin>>N>>K>>X;
	int A[N];
	for(int i=0; i<N; i++){
	    cin>>A[i];
	}
	int sum = A[0];
	bool flag = false;
	while(T--){
	    for(int i=1; i<N; i++){
	    if(A[i]>sum){
	        flag = true;
	    }
        else flag = false;
	    sum += A[i];
	}
	if(flag==true && A[K-1]==X) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	}
}
