#include<stdio.h>
int queue[100],rear=-1,front=-1,size;

void enque(int val)
{
	if(rear==size-1)
	{
		printf("Queue is full");
		return;
	}
	else if(front==-1 &&rear==-1)
	{
		front=0;
		rear=0;
		queue[rear]=val;
		
	}
	else
	{
      rear++;
	  queue[rear]=val;
    }
}
void display()
{
	int i;
	if(rear==-1 &&front==-1)
	{
		printf("Queue is empty\n");
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("%d ",queue[i]);
		}
		printf("\n");
	}
}
int deque()
{
	int val;
	if(rear==-1 && front==-1)
	{
	    return -1;	
	}
	if(front==rear)
	{
		val=queue[front];
		front=-1;
		rear=-1;
		return val;
	}
		val=queue[front];
		front++;
        return val;
}

int main()
{
    int ch,val;
	printf("Enter the elements in array");
	scanf("%d",&size);
	while(1)
	{
		printf("1.enque 2.deque 3.display 4.exit");
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
//1.enque 2.deque 3.display 4.exit2
//10                                  //deque output
//1.enque 2.deque 3.display 4.exit3
//20
//1.enque 2.deque 3.display 4.exit2
//20
//1.enque 2.deque 3.display 4.exit3
//Queue is empty
//1.enque 2.deque 3.display 4.exit

