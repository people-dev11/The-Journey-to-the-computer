#include<stdio.h>

int main()
{
	int price=0;
	int AMOUNT=0;
	
	printf("请输入货物金额：");
	scanf("%d",&price); 
	
	printf("请输入总共给了多少钱：");
	scanf("%d",&AMOUNT) ;
	int change=AMOUNT-price;
	printf("找您%d元。\n",change);
	
	
	
	return 0;
 } 
