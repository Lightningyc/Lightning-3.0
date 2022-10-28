#include<stdio.h>
enum SEX
{
	MALE=6,//赋初始值   //枚举变量：可以一一列举的变量。
	FEMALE,//列举未来的可能取值
	SECRECT
};

int main()
{
	SEX i = MALE;
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRECT);
	return 0;
}