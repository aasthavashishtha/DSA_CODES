#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n+1);
    cin.ignore();
    int maxlen=0,currlen=0,index;
    for(int i=0;i<=n;i++)
    {
        if(arr[i]==' '||arr[i]=='\n')
        {
            if(maxlen<currlen)
                maxlen=currlen,index=i;
            currlen=0;
        }
        else
            currlen++;
    }
    cout<<maxlen;
    for(int i=index-maxlen;i<=maxlen;i++)
        cout<<arr[i];
}