#include<bits/stdc++.h>
int msort(int [],int[],int,int);
int merge1 (int[],int[],int,int,int);
int main()
{
	int a[10],t[10],n,i;
	printf("enter limit:\n");
	scanf("%d",&n);
	printf("enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the array elements are:");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	msort(a,t,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d",t[i]);
	}
}
int msort(int a[],int t[],int lb,int ub)
{
	int mid=0;
	if(lb<ub)
	{
		mid=(lb+ub)/2;
		msort(a,t,lb,mid);
		msort(a,t,mid+1,ub);
		merge1(a,t,lb,ub,mid);
	}
	else
        return t;
}
int  merge1(int a[],int t[], int lb, int ub, int mid)
{
	int i,le=mid,k=lb,n;
	while(lb<=le && mid+1<=ub)
	{
		if(a[lb]<a[mid+1])
		{
			t[k]=a[lb];
			k++;
			lb++;
		}
		else
		{
			t[k]=a[mid+1];
			k++;
			mid+1;
		}
	}
	for(i=0;i<k;i++)
	{
		a[i]=t[i];
	}
    return t ;
}
