#include <stdio.h>

#define NUMBER 4

void rev_rcpy(int v1[],const int v2[],int n) /*对数组v2进行倒序排列并保存在v1*/
{
	int i;
	int tmp=n-1;

	for(i=0;i<n;i++){
            v1[tmp--]=v2[i];
         }
}
int main(void)
{
	int i;
	int v2[NUMBER];
        int v1[NUMBER];

	for(i=0;i<NUMBER;i++){
		printf("v2[%d]:",i);
		scanf("%d", &v2[i]);
	}
	rev_rcpy(v1,v2,NUMBER);

	for(i=0;i<NUMBER;i++){
		printf("v1[%d]=%d \n", i,v1[i]);
	}

	return 0;
}
