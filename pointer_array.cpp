#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int *ptr=arr;
    for(int i=0;i<10;i++)
    {
        cin>>*(ptr+i);
    }
    for(int i=0;i<10;i++)
    {
        cout<<*(ptr+i);
    }
}