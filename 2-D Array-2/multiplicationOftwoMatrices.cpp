#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cout<<"Enter rows of 1st matrix : ";
    cin>>m;
    int n;
    cout<<"Enter cols of 1st matrix : ";
    cin>>n;

    int p;
    cout<<"Enter rows of 2nd matrix : ";
    cin>>p;
    int q;
    cout<<"Enter cols of 2nd matrix : ";
    cin>>q;
    if (n==p)
    {   int a[m][n];
        
        cout<<"Enter element of 1st matrix : ";
        for (int i = 0; i <m ; i++)
        {
            for (int j = 0; j <n; j++)
            {
                cin>>a[i][j];
            }
            
        }

        int b[p][q];
        cout<<"Enter element of 2nd matrix : ";
        for (int i = 0; i <p ; i++)
        {
            for (int j = 0; j <q; j++)
            {
                cin>>b[i][j];
            }
            
        }
        // resultant matrices
        int res[m][q];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                //multiply
                res[i][j] = 0;
                // res[i][j] = a[i]][0]+b[0][j]+a[i][1]+b[1][j];
                for (int k = 0; k < p; k++)
                {
                    res[i][j] += a[i][k]*b[k][j];
                }
                
            }
            
        }
         for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
        
    }
    else{
        cout<<"The matrices can not be multiplied";
    }
    
}