#include<stdio.h>

void mystr_rev(char *str, int n);

int main()
{
	char *ptr,str[50];
	int i,cnt=0;
	void(*fp)(char *, int)=&mystr_rev;
	
	*ptr= (char*)malloc(50*sizeof(char));

	printf("Enter the string:-");
	scanf("%s",*ptr);


/*	for(i=0;str[i];i++)
		cnt++;

	(*fp)(&str,cnt);
*/
	printf("%s",*ptr);
}

void  mystr_rev(char *str,int n)
{
	char temp;
	int i,j;

	for(i=0,j=(n-1);i<=(n-1)/2;i++,j--)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}

}
