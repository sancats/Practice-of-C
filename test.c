#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�Զ���Add������λ�ÿ��Ͽ��£������Ϸ�ʱ���죩
static int Add(int x, int y)
{
	int sum = x + y;

	return sum;
}
//�������ĺ�
int main()
{
	int a = 0;
	int b = 0;
	printf("����������ӵ���������,���ö��Ÿ�����������ɺ�س�\n");

	scanf("%d,%d", &a, &b);
	int c = Add(a,b);//�Զ���Add����
	printf("%d\n", c);
	return 0;
}

