#include<stdio.h>
int main()
{
	int i,n,flag=0,key,a[100];
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Elements to search");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key);
		{
			flag=1;
			break;
		}
	}
	if(flag!=0)
	{
		printf("Element is found at index %d",i);
	}
	else
	{
		printf("Element is not found");
	}
}

