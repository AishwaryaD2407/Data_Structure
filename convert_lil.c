#include<stdio.h>

int main()
{
int result, i=0x12345678;
printf("%x",i);
//result=((i&0x000000ff)<<24)|((i&0xff000000)>>24)|((i&0x00ff0000)>>8)|((i&0x0000ff00)<<8);
result=((i&0x0000000f)<<28)|((i&0xf0000000)>>28)|((i&0x0ffffff0));
printf("\n%x",result);

}
