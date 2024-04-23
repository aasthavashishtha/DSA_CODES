/*prime numbers are positive number which are either divided by 1 or by themselves 
 negative numbers are neither considered as prime nor non prime
*/
#include<iostream>
#include<math.h>
using namespace std;
bool is_prime(int num)
{
    if(num>0)                     //checking is number positive or not if positive the check is it prime or non prime                                
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
