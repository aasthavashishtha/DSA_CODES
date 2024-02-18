#include<iostream>
using namespace std;
int fact(int num)
{
    if(num==1)
        return 1;
    else
        return num * fact(num-1);
}
int main()
{
    int num;
    cin>>num;
    if(num<=0)
        cout<<"number is smaller than 0";
    else
        cout<<fact(num);
}