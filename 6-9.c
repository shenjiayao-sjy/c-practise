#include <stdio.h>

#define NUMBER 4

void rev_intary(int v[],int n)  /*进行倒序排列*/
{
	int i;
	int tmp;

	for(i=0;i<n/2;i++){
		tmp=v[i];
		v[i]=v[n-i-1];
	 	v[n-i-1]=tmp;
	 }
}

int main(void)
{
	int i;
	int v[NUMBER];

	for(i=0;i<NUMBER;i++){
		printf("v[%d]:",i);
		scanf("%d", &v[i]);
	}
	rev_intary(v,NUMBER);

	for(i=0;i<NUMBER;i++){
		printf("v[%d}=%d\n", i,v[i]);
        }
	return	0;
}
