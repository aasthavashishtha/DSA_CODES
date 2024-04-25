#include <stdio.h>
#define max 10
void binary_search(int a[],int n,int key)
{
    int low=0,mid,high=n-1;                         
    while(low<high)                                 
    {
        mid=(low+high)/2;
        if(a[mid]==key)
        {
            printf("key found \n");
            break;
        }
        if(key<a[mid])
            high=mid-1;
        else
            low=mid+1;
    }
    if(low==high)
        printf("key not found\n");
}
int main()
{
    int a[max]={1,2,3,4,5,6};
    binary_search(a,6,3);
    binary_search(a,6,9);

    return 0;
}
