#include <stdio.h>

int cube(int x)
{
	return x*x*x;/*返回x的立方*/
}

int main(void)
{
	int x;
	printf("请输入一个整数:");
	scanf("%d", &x);

	printf("该整数的立方为%d", cube(x));

	return 0;
}
