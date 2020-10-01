#include<stdio.h>
void main()
{
int a[10],n,i,j,lar,sm;
printf("enter the size of array: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter %dth element of array: ",i);
scanf("%d",&a[i]);
}
printf("---------array-------\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
lar=a[0];
sm=a[0];
for(i=0;i<n;i++)
{
if(a[i]>lar)
{
lar=a[i];
}
if(a[i]<sm)
{
sm=a[i];
}
}
printf("largest element is: %d & smallest element is: %d",lar,sm);
}
