#include<stdio.h>
void main()
{
int a[10],n,i,j,p,dup;
printf("enter the size of array: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter %dth array element: ",i);
scanf("%d",&a[i]);
}
printf("---------array elements-------\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;)
{
if(a[i]==a[j])
{
    printf("\nthe duplicate element is: %d\n",a[i]);
for(p=j;p<n;p++)
{
a[p]=a[p+1];
}
n--;
}
else
{
j++;
}
}
}
printf("---------array after deleting duplicates elements-------\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}
