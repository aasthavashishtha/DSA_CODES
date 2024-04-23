#include<iostream>
using namespace std;
int check(int num)
{
    return (num && !(num&num-1));
}
int main()
{
    int num;
    cin>>num;
    if(check(num))
        cout<<"yes";
    else
        cout<<"no";
}