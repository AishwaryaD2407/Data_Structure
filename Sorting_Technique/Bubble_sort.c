#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>

struct node{
	int data;
	struct node *next;
}*head;


void input(int n);
void delete(void);
void display(void);
void bubble_sort(void);
void swap(struct node *a, struct node *b);  


int main()
{
	int n;
	char choice;

	printf("Enter the number of nodes : ");
	scanf("%d",&n);

	while(1)
	{

		printf("For input   enter ----> i\n");
		printf("For remove  enter ----> r\n");
		printf("For display enter ----> d\n");
		printf("For Sort    enter ----> s\n");
		printf("For Exit    enter ----> x\n");
		__fpurge(stdin);
		printf("Enter the choice : ");
		scanf("%c",&choice);
		switch(choice)
		{
			case 'i' : input(n);
				   break;
			case 'r' : delete();
				   break;
			case 'd' : display();
				   break;
			case 's' : bubble_sort();
				   break;
			case 'x': return 0;
			default :printf("Invalid choice.");
		}
	}
	return 0;
}

void input(int n)
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


void delete(void)
{
	int n,i;
	struct node *prev,*newnode=NULL;
	if(head==NULL)
	{
		printf("No data present.");
		return ;
	}
	printf("Node to be deleted :");
	scanf("%d",&n);
	prev=head;
	newnode=head->next;	
	for(i=0;i==n;i++)
	{
		prev=newnode;
		newnode=newnode->next;
	}
	prev->next=newnode->next;
	free(newnode);

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


void bubble_sort()  
{  
    int swapped, i;  
    struct node *ptr1;  
    struct node *lptr = NULL;  
    if (head == NULL)  
        return;  
    do
    {  
        swapped = 0;  
        ptr1 = head;  
        while (ptr1->next != lptr)  
        {  
            if (ptr1->data > ptr1->next->data)  
            {  
                swap(ptr1, ptr1->next);  
                swapped = 1;  
            }  
            ptr1 = ptr1->next;  
        }  
        lptr = ptr1;  
    }  
    while (swapped);  
}  

  
void swap(struct node *a, struct node *b)  
{  

    int temp = a->data;  

    a->data = b->data;  

    b->data = temp;  
}


