#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[50],n,i,pos,pos1,v,m;
    printf("enter array size:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter (%d)th element of array: ",i);
        scanf("%d",&a[i]);
    }
    printf("\n-------array-------\n");
    for(i=0;i<n;i++)
    {
        printf("\n %d ",a[i]);

    }
    printf("\nenter the position where you want to insert the element:");
    scanf("%d",&pos1);
    printf("\nenter the value\n");
    scanf("%d",&v);
    for(i=n;i>=pos1;i--)
    {
       a[i+1]=a[i];
    }
    n++;
    a[pos1]=v;
    for(i=0;i<n;i++)
    {
        printf("\n %d ",a[i]);
    }
    printf("\nenter the position from where you want to delete the element:");
    scanf("%d",&pos);

    for(i=pos;i<n-1;i++)
    a[i]=a[i+1];
    n--;
    for(i=0;i<n;i++)
    {
        printf("\n %d ",a[i]);
    }

    return 0;
}


