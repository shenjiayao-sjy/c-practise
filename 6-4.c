#include <stdio.h>

int pow4(int x)
{
	return x*x*x*x;/*返回x的四次方*/
}

int main(void)
{
	int x;
	printf("请输入一个整数:");
	scanf("%d", &x);

	printf("该整数的四次方为%d", pow4(x));

	return 0;
}
