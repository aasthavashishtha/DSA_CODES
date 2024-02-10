#include<iostream>
#include<math.h>
using namespace std;
bool jump(int a[],int num,int key)
{
    int curr=0,prev=0,counter=0;
    do
    {
        if(a[curr]==key)
            return true;
        if(a[curr]<key)
            prev=curr,curr=pow(2,counter++);
        else
            break;
    }
    while(curr<num);
    for(int i=prev;i<=num;i++)
    {
        if(a[i]==key)
            return true;
    }
    return false;

}
int main()
{
    int num,key;
    cin>>num;
    int a[num];
    for(int i=0;i<num;i++)
    {
        cin>>a[i];
    }
    cin>>key;
    cout<<jump(a,num,key);
}