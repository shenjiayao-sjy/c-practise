#include <stdio.h>

int main(void)
{
	int d, m , y, i;
        int n = 0, temp = 0;
        int a[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

	scanf("%d-%d-%d", &y, &m, &d);

	if((y%4==0 && y%100!=0) || (y%400==0)){
            a[1] = 29;
        }

        for(i = m - 2; i >= 0 ; i--){
            temp = a[i];
            n += temp;
        }
    
	printf("是该年的第%d天。", n + d );

	return 0;
}

