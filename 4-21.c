#include <stdio.h>

int main(void)
{
	int i,j;
	int len;

	puts("生成一个正方形");
	printf("正方形有几层:");
	scanf("%d", &len);

	for(i=1;i<=len;i++){
		for(j=1;j<=len;j++)
			putchar('*');
                putchar('\n');
        }

	return 0;
}
