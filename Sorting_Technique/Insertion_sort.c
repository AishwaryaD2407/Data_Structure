#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void *input(int *arr, int n);
void *insertionsort(int *arr, int n);
void *print(int *arr,int n);

int main()
{
	int n;
	int arr[100];
	printf("enter the number of array elements:");
	scanf("%d",&n);
	if(n<=0)
	{
		printf("No of elements are invalid");
		return 0;
	}
	input(arr,n);
	insertionsort(arr,n);
	print(arr,n);
}

void *input(int *arr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("enter the array:");
		scanf("%d",&arr[i]);
	}
}

void *insertionsort(int *arr,int n)
{
	int i,j;
	int temp;
	for(i=1;i<n;i++)
	{
		j=i;
		while(j>0 && arr[j-1] > arr[j])
		{
			temp=arr[j];
			arr[j]=arr[j-1];
			arr[j-1]=temp;
			j--;
		}
	}
}



void *print(int *arr,int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
}

