#include<stdio.h>

int reverse_num(int num)
{
	int rev=0;

	while(num)
	{
		rev=(num%10)+(rev*10);
		num=num/10;
	}
	return rev;
}

int main()
{
	int data,num;
	int (*fp)(int)=&reverse_num;

	printf("Enter the number:-");
	scanf("%d",&data);
	num=(*fp)(data);
	printf("%d",num);
}
