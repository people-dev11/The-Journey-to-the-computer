#include<stdio.h>

int main()
{
	int x=0;;
	
	int count=0;
	//printf("ÇëÊäÈëÊı×Ö\n");	
	//scanf("%d",&x);
	int i;
	
	for(x=2;count<50;x++){
		int isprime=1;
		for(i=2;i<x;i++){
			if(x%i==0){
				isprime=0;
				break; 
			}	
		}
		if(isprime==1){
			printf("%d ",x); 
			count++;
		}
}
	
	return 0;
}

