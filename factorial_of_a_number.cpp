/*
    The factorial of a non-negative integer n, denoted by n!, is the product of all positive integers less than or equal to n.
    for zero and 1  factorial is 1
*/
#include<iostream>
#include<math.h>
using namespace std;
int factorial(int num)
{
    int fact=1;
    if(num>0)
    {
        for(int i=num;i>=1;i--)
        {
            fact=fact*i;
        }
        return fact;
    }
    return 1;
}
int main()
{
    int num1;
    cin>>num1;
    if(num1<0)
        cout<<"factorial of negative number is not defined";
    else
        cout<<"factorial is "<<factorial(num1);
}
