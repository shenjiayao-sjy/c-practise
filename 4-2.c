#include <stdio.h>

int main(void)
{
	int n1,n2;
	int sum=0;
	int min,max;

	puts("请输入两个整数。");
	printf("整数1:"); scanf("%d", &n1);
       	printf("整数2:"); scanf("%d", &n2);

	if(n1>n2){
             min=n2;max=n1;
       }
        else{
             min=n1;max=n2;
       }
         
        do{
                 sum += min;
                 min++;
        }while(min<=max);
        
        if(n1>n2)
            printf("大于等于%d小于等于%d的所有整数的和是%d。",n2,n1,sum);
        else
            printf("大于等于%d小于等于%d的所有整数的和是%d。",n1,n2,sum);
 		        
	return 0;
}
