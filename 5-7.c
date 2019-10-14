#include <stdio.h>

#define NUMBER 20

int main(void)
{
	int i,j;
	int num;
	int v[NUMBER];

	printf("数据个数:");

	do{
		scanf("%d",&num);
		if(num<1||num>NUMBER)
			printf("\a请输入1～%d的数:",NUMBER);
	}while(num<1||num>NUMBER);

	for(i=0;i<num;i++){
		printf("%2d号:",i+1);
		scanf("%d",&v[i]);
        }

	printf("{");
        for(j=0;j<num;j++)
	       if(j==0)
	               printf("%d",v[j]);
	       else
		       printf(", %d",v[j]);
        printf("}");

	return 0;
}
               	

