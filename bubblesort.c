#include<stdio.h>
void bubblesort(int *arr,int n)
{
	int i,j,temp,c=0;
	for(i=0;i<n;i++)
	{
		int c=0;
		for(j=0;j<n-i;j++)
			if(arr[j]>arr[j+1])
			{
			
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				c++;
			}
		if(c==0)
		break;
	}
}
int main()
{
	int n,i,arr[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	bubblesort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
