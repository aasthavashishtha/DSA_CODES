#include<iostream>
using namespace std;
void prime(int num)
{
    int a[num+1]={0};
    for(int i=2;i<=num;i++)
        a[i]=i;

    for(int i=2;i<=num;i++)
    {
        if(a[i]==i)
        {
            for(int j=i*i;j<=num;j+=i)
            {
                if(a[j]==j)
                    a[j]=i;
            }
        }
    }
    while(num!=1)
    {
        cout<<a[num]<<" ";
        num=num/a[num];
    }
}

int main()
{
    int num;
    cin>>num;
    prime(num);
}