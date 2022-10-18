#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void *input(int *arr, int n);
void *quicksort(int *arr, int first, int last);
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
	quicksort(arr,0,n-1);
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


void *quicksort(int *arr,int first,int last)
	{
		int i, j, pivot, temp;
		if(first<last)
		{
			pivot=first;
			i=first;
			j=last;
			while(i<j)
			{
				while(arr[i]<=arr[pivot]&&i<last)
					i++;
				while(arr[j]>arr[pivot])
					j--;
				if(i<j)
				{
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
			temp=arr[pivot];
			arr[pivot]=arr[j];
			arr[j]=temp;
			quicksort(arr,first,j-1);
			quicksort(arr,j+1,last);
		}
	}





void *print(int *arr,int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
}
