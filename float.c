#include<stdio.h>

int main()
{
	float foot=0;
	double inch=0;
	printf("请输入您身高的英尺和英寸：\n");
	scanf("%f %lf",&foot,&inch);
	printf("您的身高%f尺%f寸，实际为%lf米",foot,inch,(foot+(inch/12))*0.3048);
	
	return 0;
}
