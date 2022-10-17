#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>

struct node{
	char  data;
	struct node *next;
}*head;

void create_node(int n);
void display(int n);

int main()
{
	int n;
	printf("Enter the number of nodes want to add : ");
	scanf("%d",&n);

	create_node(n);
	printf("List of data : \n");
	display(n);
	return 0;
}

void create_node(int n)
{
	struct node *newNode, *temp;
	int i;
	char data;

	head=(struct node *)malloc(sizeof(struct node ));

	if(head == NULL)
	{
		printf("Memory cannot be allocated. ");
		return ;
	}
	__fpurge(stdin);
	printf("Enter the data : ");
	scanf("%c",&data);

	head->data=data;
	head->next=head;

	temp=head;

	for(i=2;i<=n;i++)
	{
		newNode=(struct node *)malloc(sizeof(struct node));

		if(newNode==NULL)
		{
			break;
		}

		printf("Enter the data : ");
		__fpurge(stdin);                
		scanf("%c",&data);

		newNode->data=data;
		newNode->next=head;

		temp->next=newNode;
		temp=temp->next;
	}
}


void display(int n)
{
	struct node *temp;

	if(head ==NULL)
	{
		printf("No memory present .\n") ;
		return;

	}
	temp = head;

	while(n)
	{
		printf("Data is = %c\n",temp->data);
		temp=temp->next;
		n--;
	}
}

