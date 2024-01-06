
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

int ncr(int n,int r)
{
    return factorial(n)/(factorial(n-r)*factorial(r));
}
void pascal_triangle(int num)
{
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<ncr(i,j)<<"\t";
        }
        cout<<"\n";
    }
}
int main()
{
    int num1;
    cin>>num1;
    pascal_triangle(num1);
    
}
