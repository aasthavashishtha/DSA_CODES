#include<iostream>
using namespace std;
int check(int num,int pos)
{
    return (num&(1<<pos));
}
int main()
{
    int num,pos,update;
    cin>>num>>pos>>update;
    if(update==check(num,pos))
    {
            cout<<"same bit";
    }
    else if(update==1)
    {
        cout<<(num|(1<<pos));
    }
    else
    {
        cout<<(num|(~(1<<pos)));
    }
}