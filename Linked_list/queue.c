#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>

struct queue{
	int data;
	struct queue *next;
};

struct queue *Rear = NULL;
struct queue *Front = NULL;

void enqueue();
void dequeue();
void show();

int main()
{
	int ch,n,i;

	printf("Enter the number of elements for queue: ");
	scanf("%d",&n);

	while (1)
	{
		printf("Enter 1 forEnqueue Operation\n");
		printf("Enter 2Dequeue Operation\n");
		printf("Enter 3 Display the Queue\n");
		printf("Enter 4 Exit\n");
		printf("Enter your choice of operations : ");
		scanf("%d", &ch);
		switch (ch)
		{
			case 1:for(i=0;i<n;i++)
			       {
				       enqueue();
			       }
			       break;
			case 2:dequeue();
			       break;
			case 3:show();
			       break;
			case 4:return 0;
			default: printf("Incorrect choice \n");
		} 
	} 
} 

void enqueue()
{
	struct queue *newnode;	
	int val;
	printf("Element to be inserted in the Queue\n : ");
	scanf("%d", &val);

	newnode=(struct queue *)malloc(sizeof(struct queue));

	newnode->data=val;
	newnode->next=NULL;

	if(Front==NULL && Rear==NULL)
	{
		Rear=Front=newnode;
	}
	else
	{
		Rear->next=newnode;
		Rear=newnode;
	}
}

void dequeue()
{
	struct queue *temp;
	if(Front==NULL)
	{
		printf("The queue is empty.");
		return ;
	}
	else
	{
		temp=Front;
		Front=Front->next;
	}
	if(Front == NULL)
		Rear=NULL;
	free(temp);

} 

void show()
{
	struct queue *temp=Front;

	while(temp)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
