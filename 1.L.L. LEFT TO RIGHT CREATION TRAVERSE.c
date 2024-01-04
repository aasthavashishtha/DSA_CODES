#include<stdio.h>
#include<stdlib.h>
typedef struct list 
{
    int data ;
    struct list *next;
}list;
void main()
{
    list *p=NULL,*r=NULL,*l=NULL;
    int val,m,c=0;
    do
    {
        printf("enter value:");
        scanf("%d",&val);
        p=(list*)malloc(sizeof(list));
        p->data=val;
        if(r==NULL&&l==NULL)
        {
            l=r=p;
        }
        else
        {
            r->next=p;
            r=p;
        }
        printf("do you want to continue:");
        scanf("%d",&m);
    }while(m==1);
    r->next=NULL;
    p=l;
    while(p!=NULL)
    {
        printf("%d  ",p->data);
        p=p->next;
        c++;
    }
    printf("\nno. of nodes : %d",c);
}
