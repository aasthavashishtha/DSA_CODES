#include <stdio.h>
#define max 10
void sentinel_search(int a[],int n,int key)
{
    int i=0,last;
    last=a[n-1];
    a[n-1]=key;
    while(a[i]!=key)
    {
        i++;
    }
    a[n-1]=last;
    if(i<n-1||a[n-1]==key)
        printf("\n%d found at index %d",key,i);
    else
        printf("\n%d not found",key);
}
int main()
{
    int a[max]={1,3,4,6,2,0};
    sential_search(a,6,3);
    sential_search(a,6,9);

    return 0;
}
