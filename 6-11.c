#include <stdio.h>

#define NUMBER 5

int search_idx(const int v[],int idx[],int key,int n)
{
	int i;
	int num=0;
	v[n]==key;
	
	for(i=0;i<n;i++){
	   if(v[i]==key){
		   idx[i]=i;
	           num++;
	   }
	}
	return num;
}

int  main(void)
{
	int i,ky,num;
	int v[NUMBER];
	int idx[NUMBER];

	for(i=0;i<NUMBER;i++){
		printf("v[%d]=",i);
		scanf("%d", &v[i]);
	}
	printf("要查找的值:");
	scanf("%d", &ky);
        num = search_idx(v,idx,ky,NUMBER);
	printf("有相等元素%d个",num);

	return 0;
}
