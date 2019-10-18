#include <stdio.h>

void alert (int ch,int n) /*连续发出n次响铃*/
{
		putchar(ch);
}

int main(void)
{
	int n;
        int i;

	printf("请输入一个整数:");
	scanf("%d", &n);

	for(i=1;i<=n;i++)
            alert('\a',i);

	return 0;
}
