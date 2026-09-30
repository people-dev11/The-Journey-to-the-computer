#include<stdio.h>

int main()
{
	int hour1=0,min1=0;
	int hour2=0,min2=0;
	
	printf("请输入起始时间\n请输入结束时间\n");
	
	scanf("%d %d",&hour1,&min1);
	scanf("%d %d",&hour2,&min2);
	
	int t1=hour1*60+min1;
	int t2=hour2*60+min2;
	
	int t=t2-t1;
	printf("两者相差%d时%d分钟",t/60,t%60);
	 
	return 0;
}
