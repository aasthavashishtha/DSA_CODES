#include<iostream>
using namespace std;
int main()
{
    string arr;
    getline(cin,arr);
    int count=0,ans=0,i=-1;
    do
    {
        i++;
        if(arr[i]==' ')
        {
            ans=max(ans,count);
            count=0;
        }
        else
            count++;
    }while(arr[i]!='\0');
    cout<<ans;
}