#include<stdio.h>
#define max 10
void qsort(int[],int,int);
int  main()
{
	int a[max],i,j,n;
	printf("enter limit\n");
	scanf("%d",&n);
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	qsort(a,0,n-1);
	for(i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}
}
void qsort(int a[], int lb, int ub)
{
	int i=lb,j=ub,key=a[lb],t=0,n;
	if(lb>=ub)
		return;
		while(i<j)
		{
			while(key>=a[i] && i<j)
				i++;
			while(key<a[j])
				j--;
			if(i<j)
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
		a[lb]=a[j];
		a[j]=key;
		qsort(a,lb,j-1);
		qsort(a,j+1,ub);
}
