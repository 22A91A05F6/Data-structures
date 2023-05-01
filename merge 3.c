#include<stdio.h>
void merge(int*arr1, int n,int *arr2, int v )
{

   int res[100]={0},i=0,j=0,k=0;
    while(i<n&&j<v)
    {
    	if(arr1[i]>arr2[j])
    	{
    		res[k]=arr2[j];
    		j++;
    		k++;
		}
		else
		{
			res[k]=arr1[i];
			i++;
			k++;
		}
	}

	while(i<n)
	{
		res[k]=arr1[i];
		i++;
		k++;
	}
	while(j<v)
	{
		res[k]=arr2[j];
		j++;
		k++;
		
	}
	for(i=0;i<n+v;i++)
     {
     	printf("%d ",res[i]);
	 }
}
int main()
{
	int i,n,v,j,k;
	printf("Enter the size of array\n");
	scanf("%d%d",&n,&v);
	int arr1[n],arr2[v];
	printf("Enter the elements of a");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("Enter the elements of b ");
	for(j=0;j<v;j++)
	{
		scanf("%d",&arr2[j]);
	}
	merge(arr1,n,arr2,v);

	
}
