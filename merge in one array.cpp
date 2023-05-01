#include<stdio.h>
void merge(int *a,int l, int h)
{
	int m,i,j,k=0,p[h-l+1];
	m=(l+h)/2;
	i=l;
	j=m+1;
	while(i<=m && j<=h)
	{
		if(a[i]>a[j])
		{
			p[k]=a[j];
			k++;
			j++;
		}
		else
		{
			p[k]=a[i];
			k++;
			i++;
		}
	}
	while(i<=m)
	{
		p[k]=a[i];
		k++;
		i++;
	}
	while(j<=h)
	{
		p[k]=a[j];
		k++;
		j++;
	}
	k=0;
	for(i=l;i<=h;i++)
	{
		a[i]=p[k];
		k++;
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	merge(a,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
