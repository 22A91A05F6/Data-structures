#include<stdio.h>
struct student
{
	char roll[20];
	char name[20];
	 int age;
	
};
int main()
{
	int n;
	printf("Enter the value of students");
	scanf("%d",&n);
	struct student s[n];
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter the data of students:%d",i+1);
		printf("Enter roll");
		scanf("%s",s[i].roll);
		printf("Enter name");
		scanf("%s",s[i].name);
		printf("Age");
		scanf("%d",&s[i].age);
	}
	     printf("roll\tname\tage\n");
	
	for(i=0;i<n;i++)
	{
		printf("%s\t%s\t%d\n",s[i].roll,s[i].name,s[i].age);
	}
}
