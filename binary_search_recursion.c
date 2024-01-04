#include <stdio.h>
#define max 10
int  binary_search(int a[],int low,int high,int key)
{
    int mid;                        
    if(low<high)                                 
    {
        mid=(low+high)/2;
        if(a[mid]==key)
            return mid;
        else if(key<a[mid])
            return  binary_search(a,low,mid-1,key);
        else
            return  binary_search(a,mid+1,high,key);
    }
    return -1;
}
int main()
{
    int a[max]={1,2,3,4,5,6};
    int check=binary_search(a,0,5,10);
    if(check>-1)
        printf("found");
    else
        printf("not found ");

    return 0;
}
