#include<iostream>
using namespace std;
void print(int num)
{
    if(num!=1)
        print(num-1);
    cout<<num<<" ";
}
int main()
{
    int num;
    cin>>num;
    print(num);
}