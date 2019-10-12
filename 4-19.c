#include <stdio.h>

int main(void)
{      
	int i,n;
	int num=0;

	printf("整数值:");
	scanf("%d",  &n);

	for(i=1;i<=n;i++)
		if(n%i==0){
                  num++;
		  printf("%d", i);
                  putchar('\n');
	 }    

	printf("约数有%d个。", num);

	return 0;
}
