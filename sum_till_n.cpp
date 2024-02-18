#include<iostream>
using namespace std;
int sumupto(int num)
{
    if(num==0)
        return 0;
    else
        return num + sumupto(num-1);
}
int main()
{
    int num;
    cin>>num;
    if(num<0)
        cout<<"number is smaller than 0";
    else
        cout<<sumupto(num);
}