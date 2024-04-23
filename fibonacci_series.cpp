/*The Fibonacci sequence is a series of numbers in which each number, 
    known as a Fibonacci number, is the sum of the two preceding ones.
    It usually starts with 0 and 1.
    sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, and so on.
*/
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
