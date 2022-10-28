#define  _CRT_SECURE_NO_WARNINGS 1//解决scanf函数报错的问题，记得复制下来放到第一行。
#include <stdio.h>                //也可使用scanf_s 函数，但是这不是c语言提供的，是VS编译器提供的。
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);//输入函数（相当于填坑，占好位子再赋类别）
	sum = a + b;
	printf("sum=%d\n", sum);
	return 0;
}

