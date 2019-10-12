#include <stdio.h>

int main(void)
{
	int n1,n2,n3,n4;
	double d1,d2,d3,d4;

	n1=5;n2=2;
	d1=5.0;d2=2.0;
	
	printf("整型常量5/2为%d,5*2为%d \n",n1/n2,n1*n2);
	printf("浮点型常量5.0/2.0为%f,5.0*2.0为%f\n",d1/d2,d1*d2);

	printf("令int n3为"); scanf("%d", &n3);
        printf("令int n4为"); scanf("%d", &n4);
	printf("令double d3为"); scanf("%lf", &d3);
        printf("令double d4为"); scanf("%lf", &d4);

	printf("整型变量n3/n4为%d,n3*n4为%d\n",n3/n4,n3*n4);
	printf("浮点型变量d3/d4为%f,d3*d4为%lf\n",d3/d4,d3*d4);

	return 0;
}



