#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    int x,y;
    cin>>x>>y;
    int b[x][y];
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            cin>>b[i][j];
        }
    }
    if(n==x)
    {
        int c[m][y];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<y;j++)
            {
                int sum=0;
                for(int k=0;k<n;k++)
                {
                    sum+=a[i][k]*b[k][j];
                }
                c[i][j]=sum;
            }
        }

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<y;j++)
            {
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else
        cout<<"no ";




    
}