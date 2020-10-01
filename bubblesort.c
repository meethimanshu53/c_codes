#include<stdio.h>
void bubblesort(int [],int);

void main()
{
        int a[100],n,i;
        printf("\nenter array size:");
        scanf("%d",&n);
        printf("\n--------enter array elements--------\n");
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
        printf("\n------Sorted array--------\n");
        bubblesort(a,n);
        for(i=0;i<n;i++)
        {
                printf("%d\t",a[i]);
        }
}

void bubblesort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;++i)
        {
                for(j=0;j<n-1-i;++j)
                {
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
