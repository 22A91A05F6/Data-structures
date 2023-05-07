//polynomial representation using linked list
#include<stdio.h>
#include<stdlib.h>
struct Node{
	int coef,pow;
	struct Node *next;
};
typedef  struct Node NODE;
NODE *head=NULL,*tail=NULL,*temp,*NN;
NODE *Newnode(int coef,int pow)
{
	NN=(NODE *)malloc(sizeof(NODE));
	NN->coef=coef;
	NN->pow=pow;
	NN->next=NULL; 
	return NN;
}
void insert(NODE *node)
{
	if(head==NULL &&tail==NULL)
	{
		head=NN;
		tail=NN;
	}
	else
	{
		tail->next=NN;
		tail=NN;
	}
	
}
void display()
{
	temp=head;
	if(temp==NULL)
	{
		printf("NO NODES\n");
	}
	else
	{
		while(temp)
		{
			
			printf("%dX%d\t",temp->coef,temp->pow);
			temp=temp->next;
		}
	}
}
int main()
{
	int coef,pow;
	char ch='a';
	while(ch!='N')
	{
	   scanf("%d%d",&coef,&pow);
	   NN=Newnode(coef,pow);
	   insert(NN);
	   printf("DO U want to enter Y/N:");
	   scanf(" %c",&ch);	
	}
	display();
}
