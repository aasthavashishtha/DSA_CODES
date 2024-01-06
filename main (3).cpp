#include<iostream>
#include<math.h>
using namespace std;
bool is_prime(int num)
{
    if(num>0)
    {
        for(int i=2;i<sqrt(num);i++)
        {
            if(num%i==0)
                return false;
        }
        return true;
    }
    else
        return false;
}
int main()
{
    int num1,num2;
    cin>>num1>>num2;
    for(int i=num1;i<=num2;i++)
    {
        if(is_prime(i))
            cout<<i<<"\t";
    }

    return 0;
}
