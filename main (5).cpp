#include<iostream>
#include<math.h>
using namespace std;
int factorial(int num)
{
    int fact=1;
    for(int i=num;i>=1;i--)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int num1;
    cin>>num1;
    cout<<"factorial is "<<factorial(num1);
}
