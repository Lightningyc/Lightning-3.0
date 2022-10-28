#include<stdio.h>
int main(void)// int main()是旧版写法
{
	printf("(Are you ok??)\n");// ??)就叫三字母词，在老版本会被输出为 ]
	printf("%c\n",'a');
	printf("%s\n","\"");
	printf("%s\n","\//");
	printf("%c\n",'?');
	printf("\a");
	printf("%c\n",'\130');// 130是八进制的88，X对应的ACII码是88。
	// \n为换行符，\加符号为打印字符
	// 打印一个整型 %d
	// 打印一个字符 %c(单引号隔开)
	// 打印字符串 %s
	return 0;
}