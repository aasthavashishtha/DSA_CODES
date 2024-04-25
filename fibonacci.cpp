#include<iostream>
using namespace std;
int fibo(int num)
{
    if(num==1)
        return 0;
    else if(num==2z)
        return 1;
    else
        return fibo(num-1) + fibo(num-2);
}
int main()
{
    int num;
    cin>>num;
    if(num<0)
        cout<<"number is smaller than 0";
    else
        cout<<fibo(num);
}