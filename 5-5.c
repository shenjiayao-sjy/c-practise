#include <stdio.h>

#define NUMBER  7

int main(void)
{
	int i;
	int x[NUMBER];

	for(i=0;i<NUMBER;i++){
                printf("x[%d]:",i);
	        scanf("%d", &x[i]);
	}
	 
	for(i=0;i<4;i++){
                int temp=x[i];
		x[i]=x[NUMBER-i-1];
		x[NUMBER-i-1]=temp;
	}

	puts("倒序排列了。");
	for(i=0;i<NUMBER;i++)
		printf("x[%d]=%d\n",i,x[i]);

	return 0;
}

