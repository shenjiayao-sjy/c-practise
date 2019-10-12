#include <stdio.h>

int main(void)
{
        int i,j;
	int height;

        puts("让我们来画一个金字塔。");
	printf("金字塔有几层:");
	scanf("%d",&height);

        for(i=1;i<=height;i++){
	    for(j=0;j<height-i;j++)
	        putchar(' ');
            for(j=0;j<((i-1)*2+1);j++)
	        putchar('*');
             printf("\n");
          }

	return 0;
}
