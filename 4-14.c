#include <stdio.h>

int main(void)
{
	int no;
        int i=1;

	printf("请输入一个整数:");
	scanf("%d", &no);

	for(i=1;i<=no;i++)
		printf("%d",i%10);

	return 0;
}
