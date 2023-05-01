#include<stdio.h>
void linearsearch(int *a,int n,int t)

{
	for(i=0;i<n;i++)
	{
		if(a[i]==t)
		{
			return i;
		}
	}
	return a[n],t,flag;
}
int main()
{
       int a[100],n,flag,t,i;
	printf("Enter the value of n");
	scanf("%d",&n);
	printf("enter the elements of an array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		printf("Enter the element to search");
		scanf("%d",&t);
		flag=linearsearch(a,n,t);//fun call
		printf("%d",flag);
}
