#include <stdio.h>   
extern int g_val;//声明变量
int main()
{
	printf("%d\n", g_val);
	return 0;
}
//局部变量的生命周期:进入局部范围开始，
//出局部范围结束。
//全局变量的生命周期：程序的生命周期。