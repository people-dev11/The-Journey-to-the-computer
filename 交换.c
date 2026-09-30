#include<stdio.h>

int main()
{
	int a=5;
	int b=6;
	int c;
	
	c=a;
	a=b;
	b=c;
	printf("a的值为%d,b的值为%d",a,b);
	
	return 0;
 } 
