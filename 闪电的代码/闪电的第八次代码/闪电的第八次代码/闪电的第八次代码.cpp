#include<stdio.h>
int main()
{
	const int num = 20;//const修饰代表该值由变量变为常变量，不可被修改。
	num = 10;//常属性（不能改变的属性）。
	printf("%d\n", num);
	return 0;
}
