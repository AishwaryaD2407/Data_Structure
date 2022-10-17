#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
}*head;

void create_node(int n);
void display();

int main()
{
	int n;
	printf("Enter the number of nodes want to add : ");
	scanf("%d",&n);

	create_node(n);
	printf("List of data : \n");
	display();
	return 0;
}

void create_node(int n)
{
	struct node *newNode, *temp;
	int data, i;

	head=(struct node *)malloc(sizeof(struct node ));

	if(head == NULL)
	{
		printf("Memory cannot be allocated. ");
		return ;
	}
	printf("Enter the data : ");
	scanf("%d",&data);

	head->data=data;
	head->next=NULL;

	temp=head;

	for(i=2;i<=n;i++)
	{
		newNode=(struct node *)malloc(sizeof(struct node));

		if(newNode==NULL)
		{
			printf("Memory cannot be allocate");
			break;
		}

		printf("Enter the data : ");
		scanf("%d",&data);

		newNode->data=data;
		newNode->next=NULL;

		temp->next=newNode;
		temp=temp->next;
	}
}


void display()
{
	struct node *temp;

	if(head ==NULL)
	{
		printf("No memory present .\n")	;	
		return;

	}
	temp = head;

	while(temp!=NULL)
	{
		printf("Data is = %d\n",temp->data);
		temp=temp->next;
	}
}
