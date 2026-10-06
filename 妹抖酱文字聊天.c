#include<stdio.h>

int main()
{
	
	int choice=0;	
//	printf("主人今天需要做什么\n");
//	printf("1.让女仆陪我聊聊天\n2.让女仆陪我一起写代码\n3.摸摸女仆的头\n0.小女仆走开吧我自己待一会\n");
//	scanf("%d",&choice);
	
	do{
//	if(choice=0){
//		printf("好的主人，不要把梦想埋没\n");
//		break;
//	}
	printf("主人今天需要做什么\n");
	printf("1.让女仆陪我聊聊天\n2.让女仆陪我一起写代码\n3.摸摸女仆的头\n0.小女仆走开吧我自己待一会\n");
	scanf("%d",&choice);
	
	
	
	
	
	switch(choice){
		case 1: printf("好呀主人你想聊什么我都会陪着你呢\n\n");break;
		case 2: printf("没问题主人我会陪着找出所有问题的\n\n");break;
		case 3: printf("才...才不喜欢被摸头呢。最讨厌主人了(┬┬﹏┬┬)\n\n");break;
			 	
		
	}
	 
	
}while(choice!=0);
	printf("好的主人，妹抖酱走啦，不要想我哦\n");
	printf("无论主人选什么妹抖酱都最喜欢主人了");
	
	
	
	return 0;
}
