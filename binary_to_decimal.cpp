#include<iostream>
#include<math.h>
using namespace std;
int to_decimal(int num)
{
    int i=0,deci=0;
    while(num>0)
    {
        deci=deci+(num%10)*pow(2,i);
        i++;
        num=num/10;
    }
    return deci;
}
int main()
{
    int num;
    cin>>num;
    cout<<to_decimal(num);
}
