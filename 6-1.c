#include <stdio.h>

int min2(int a,int b)
{
	int min=a;
	if(b<min) min=b;
	return min;
}

int main(void)
{
	int a,b;

	puts("请输入两个整数。");
        printf("整数1：");   scanf("%d", &a);
	printf("整数2：");   scanf("%d", &b);

	printf("最小值是%d。\n",min2(a,b));

	return 0;
}
