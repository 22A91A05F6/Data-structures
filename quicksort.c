#include<stdio.h>
//void swap(int *arr,int i,int j)//


   //	int temp=arr[i];
   //	arr[i]=arr[j];
	//arr[j]=temp;

int partition(int *arr,int L,int H)
{
	int p,i,j,temp;
	p=H;
	for(i=L,j=L;i<p;i++)
	
	{
	    if(arr[i]<arr[p])
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			j++;
     	}
	}
	temp=arr[j];
	arr[j]=arr[p];
	arr[p]=temp;
	return j;
		
}
void quicksort(int *arr,int L,int H)
{
	if(L<H)
	{
		 int par=partition(arr,L,H);
		quicksort(arr,L,par-1);
		quicksort(arr,par+1,H);
	}
}
int main()
{
	int arr[100],n,i,L,H;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	quicksort(arr,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
