#include <stdio.h>
int main()
{
	int a = 0;
	while (a<= 365)//a或者line只是定义了变量的名称，//
		          //实际上就是行数。//
	{
		printf("学习:%d\n",a);
		a++;
	}
	if(a > 365)
	{
		printf("上岸\n");
	}
	return 0;
}