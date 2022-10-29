#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Add(int x, int y)//函数模块化
{
	int z = x * y;
	return z;
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	printf("输入两个操作数:");
	scanf("%d %d", &num1, &num2);
	int sum = Add(num1, num2);//Add只是一个自定义的函数名
	printf("sum=%d\n", sum);
	return 0;
}