#include<iostream>
using namespace std;
int first_occurence(int a[],int n,int key,int index)
{
    if(n==0)
        return -1;
    if(a[0]==key)
        return index;
    return first_occurence(a+1,n-1,key,++index);
} 
int last_occurence(int a[],int n,int key,int index)
{
    if(n==-1)
        return -1;
    if(a[n]==key)
        return index;
    return last_occurence(a,n-1,key,--index);
}
int main()
{
    int n,key;
    cin>>n>>key;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<(first_occurence(a,n,key,0))<<"  ";
    cout<<last_occurence(a,n-1,key,n);
}

/*
int last_occurence(int a[],int n,int key,int index)
{
    if(index==n)
        return -1;
    int check=last_occurence(a,n,key,index+1);
    if(check!=-1)
        return check;
    if(a[index]==key)
        return index;
    return -1;
}
*/