#include<iostream>
using namespace std;
void prime(int num)
{
    int a[num+1]={0};
    for(int i=2;i<=num;i++)
    {
        if(a[i]==0)
        {
            for(int j=i*i;j<=num;j=j+i)
            {
                a[j]=1;
            }
        }
    }
    int i=2;
    while(i<=num)
    {
       if(a[i]==0)
       {
            cout<<i<<" ";
       }
       i++;
    }
}

int main()
{
    int num;
    cin>>num;
    prime(num);
}