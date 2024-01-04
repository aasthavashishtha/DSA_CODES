#include <stdio.h>
#define max 10
int  ternary_search(int a[],int low,int high,int key)
{
    int mid1,mid2;
    if(low<=high)
    {
        mid1=low+(high-low)/3;
        mid2=high-(high-low)/3;
        if(a[mid1]==key)
            return mid1;
        if(a[mid2]==key)
            return mid2;
        if(key<a[mid1])
            return ternary_search(a,low,mid1-1,key);
        else if(key>a[mid2])
            return ternary_search(a,mid2+1,high,key);
        else
            return ternary_search(a,mid1+1,mid2-1,key);
        
    }
    
    return -1;
}
int main()
{
    int a[max]={1,2,3,4,5,6};
    int check=ternary_search(a,0,5,10);
    if(check!=-1)
        printf("found");
    else
        printf("not found ");

    return 0;
}
