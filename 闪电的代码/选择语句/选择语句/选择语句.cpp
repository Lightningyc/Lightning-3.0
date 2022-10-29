#define _CRT_SECURE_NO_WARNINGS 1//解决scanf报错的问题
#include <stdio.h>
int main()
{
	int input = 0;//输入的值
	    printf("考上好大学");
	    printf("那要好好学习吗(1/0)? :");
	    scanf("%d", &input);
	if (input == 1)
		printf("上岸985，211\n");
	else
		printf("复读\n");
	return 0;
}