#include <stdio.h>

int  sump(int n)  /*返回1到n之间所有整数的和*/
{
	int sum;
        int i;

	for(i=1;i<=n;i++)
		sum += i;
        return sum;
}

int main(void)
{
	int n;

	printf("请输入一个整数:");
	scanf("%d", &n);
	 
	printf("1到n之间所有整数的和为%d",sump(n));

	return 0;
}

