#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void *input(int *arr, int n);
void *selectionsort(int *arr, int n);
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
  	selectionsort(arr,n);
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

void *selectionsort(int *arr,int n)
{
	int i,j;
	int temp,flag=0;
	for(i=0;i<n-1;i++)
	{
		int min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		if(min !=i)
		{
			temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
		}
	}
}



void *print(int *arr,int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
}
