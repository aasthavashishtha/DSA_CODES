#include<iostream>
using namespace std;
int check(int num,int pos)
{
    return (num&(~(1<<pos)));
}
int main()
{
    int num,pos;
    cin>>num>>pos;
    cout<<check(num,pos);
}