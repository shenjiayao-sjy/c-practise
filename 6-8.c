#include <stdio.h>
 #define NUMBER 4

int min_of(const int v[],int n)/*返回最小值*/
{
	int i;
	int min=v[0];

	for(i=0;i<n;i++){
		if(v[i]<min)  min=v[i];
        }
	return min;
}

int main(void)
{
	int i;
	int a[NUMBER];
      
	for(i=0;i<NUMBER;i++){
		printf("a[%d]:",i);
		scanf("%d", &a[i]);
	}

	printf("最小的值为:%d",min_of(a,NUMBER));

	return 0;
}

