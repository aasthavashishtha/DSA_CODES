#include<iostream>
#include<math.h>
using namespace std;
void fibo(int num)
{
    int t1=0,t2=1,nextterm;
    for(int i=1;i<=num;i++)
    {
        cout<<t1<<"\t";
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
    }
}
int main()
{
    int num1;
    cin>>num1;
    fibo(num1);
    return 0;
}
