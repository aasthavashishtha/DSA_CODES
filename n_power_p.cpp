#include<iostream>
using namespace std;
int power(int num,int p)
{
    if(p==0)
        return 1;
    else
        return num * power(num ,p-1);
}
int main()
{
    int num,p;
    cin>>num>>p;
    if(p<0&&num<0)
        cout<<"number is smaller than 0";
    else
        cout<<power(num,p);
}