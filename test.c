#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//自定义Add函数（位置可上可下，但在上方时更快）
static int Add(int x, int y)
{
	int sum = x + y;

	return sum;
}
//求两数的和
int main()
{
	int a = 0;
	int b = 0;
	printf("输入你想相加的两个数字,并用逗号隔开，输入完成后回车\n");

	scanf("%d,%d", &a, &b);
	int c = Add(a,b);//自定义Add函数
	printf("%d\n", c);
	return 0;
}

