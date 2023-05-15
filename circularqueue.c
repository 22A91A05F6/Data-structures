#include<stdio.h>
int queue[100],rear=-1,front=-1,size;

void enque(int val)
{
	if(front==0 &&rear==size-1)
	{
		printf("Queue is full\n");
	}
	else if(rear==front-1)
	{
		printf("Queue is full\n");
	}
	else if(front==-1 &&rear==-1)
	{
		front=0;
		rear=0;
		queue[rear]=val;
	}
	else
	{
		rear=(rear+1)%size;
		queue[rear]=val;
	}
}


void display()
{
	int i=front;
	if(front==-1 &&rear==-1)
	{
		printf("Queue is empty\n");
		return -1;                       //in this step is written no need to write while loop
	}
	while(i!=rear)
	{
		printf("%d ",queue[i]);
		i=(i+1)%size;
	}
	printf("%d\n",queue[i]);
	
}
int deque()
{
	int val;
	if(front==rear)
	{
		val=queue[front];
		front=-1;
		rear=-1;
		return val;		
	}
	val=queue[front];
     front=(front+1)%size;
     return val;
}

int main()
{
    int ch,val;
	printf("Enter the elements in array");
	scanf("%d",&size);
	while(1)
	{
		printf("1.enque 2.deque 3.display 4.view front  5.view rear 6.exit");
		scanf("%d",&ch);
		if (ch==1)
		{
			//enque operation
			scanf("%d",&val);
			enque(val);//there is no return type write void
		}
		else if(ch==2)
		{
			//deque operation
			val=deque();  //fun call
			if(val==-1)
			{
				printf("Queue is empty\n");
			}
			else
			{
				printf("%d\n",val);
			}
			
		}
		else if(ch==3)
		{
			display();
			
		}
		else if(ch==4)
		{
		    printf("%d",front);	
		}
		else if(ch==5)
		{
			printf("%d",rear);
			
		}
		else
		{
			break;
		}
	}
}
//output
//Enter the elements in array
//5
//1.enque 2.deque 3.display 4.exit1
//10                                      //enque output
//1.enque 2.deque 3.display 4.exit1
//20
//1.enque 2.deque 3.display 4.exit1
//30
//1.enque 2.deque 3.display 4.exit3
//102030
//1.enque 2.deque 3.display 4.exit1
//40
//1.enque 2.deque 3.display 4.exit1
//50
//1.enque 2.deque 3.display 4.exit1
//60
//Queue is full1.enque 2.deque 3.display 4.exit

//deque operator
//Enter the elements in array
//5
//1.enque 2.deque 3.display 4.exit1
//10
//1.enque 2.deque 3.display 4.exit1
//20
