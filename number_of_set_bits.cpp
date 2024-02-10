#include<iostream>
using namespace std;
int count(int num)
{
    int count=0;
    while(num)
    {
        num=num&num-1;
        count++;
    }
    return count;
}
int main()
{
    int num;
    cin>>num;
    cout<<count(num);
}