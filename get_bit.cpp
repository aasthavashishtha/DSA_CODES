#include<iostream>
using namespace std;
int check(int num,int pos)
{
    return (num&(1<<pos));
}
int main()
{
    int num,pos;
    cin>>num>>pos;
    if(check(num,pos))
        cout<<"bit is 1\n";
    else
        cout<<"bit is 0\n";
        int a;
        a=(1<<5);
        cout<<a;
}