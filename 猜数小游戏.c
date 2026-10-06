#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand(time(0));
	int number=rand()%100;	
	int count=0;
	int a=0;
	printf("来猜一个0到100的数\n");
	
	do{
		scanf("%d",&a);
		count++;
		if(a>number){
			printf("你输入的值偏大\n"); 
		}else if(a<number){
			printf("你输入的值偏小\n"); 
		
		
		}
		if(count<7){
			printf("请重新输入，加油哦\n"); 
		} else if(count>7){
			printf("fw吗？，请掌握正确方法后再来挑战\n");
		} 
		
		
		
		
		
	
		
		
	}while(a!=number);
	
	printf("恭喜你猜对了，你总共用%d次就猜对了",count); 
	
	
	
	
	return 0;
}
