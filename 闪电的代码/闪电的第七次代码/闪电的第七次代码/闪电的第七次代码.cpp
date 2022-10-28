#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
extern int a ;
extern int b;
extern int sum;
int main()
{
	scanf("%d %d", &a, &b);//这个要先写
	sum = a + b;
	printf("sum=%d\n", sum);
	return 0;
}