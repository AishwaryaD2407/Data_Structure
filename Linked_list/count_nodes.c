#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>

struct node {
	int data;
	struct node *next;
}*head,*temp=NULL;

void insert(int data);
int count_node();
void display(void);

int main()
{
	int count;
	insert(10);
	insert(20);
	insert(60);
	insert(40);
	insert(30);
	insert(50);
	display();
	count =	count_node();
printf("\ncount is : %d\n",count);
	return 0;
}

void insert(int data)
{
	struct node *newnode=(struct node *)malloc(sizeof(struct node));

	newnode->data=data;
	newnode->next=NULL;

	if(head==NULL)
	{
		head=newnode;
		temp=newnode;
	}
	else
	{
		temp->next=newnode;
		temp=newnode;
	}

}

int count_node()
{
	struct node *current=head;
	int cnt=0;
	while(current!=NULL)
	{
		cnt++;
		current=current->next;
	}
	return cnt;
}



void display(void)
{
	struct node *temp;

	if(head ==NULL)
	{
		printf("No memory present .\n") ;
		return;

	}
	temp = head;

	while(temp!=NULL)
	{
		printf("Data is = %d\n",temp->data);
		temp=temp->next;
	}
}

