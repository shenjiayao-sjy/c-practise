#include <stdio.h>

int main(void)
{
        int no;
	
	printf("正整数:");
	scanf("%d", &no);

	while(no-->0){
		if(no%2)
			putchar('-');
		else
			putchar('+');
	}
	
	if(no>=0) printf("\n");

	return 0;
}
