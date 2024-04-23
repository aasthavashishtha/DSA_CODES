#include<iostream>
using namespace std;
void subset(string str,int n)
{
    for(int  i=0;i<(1<<n);i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
                cout<<str[j];
        }
        cout<<endl;
    }
}
int main()
{
    string str;
    cin>>str;
    int n=str.length();
    subset(str,n);    
}