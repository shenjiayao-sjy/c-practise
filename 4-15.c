#include <stdio.h>

int main(void)
{
        int no1;
        int no2;
        int i;
        int add;
        
        printf("开始数值(cm):");      scanf("%d", &no1);
        printf("结束数值(cm):");    scanf("%d", &no2);
        printf("间隔数值(cm):");    scanf("%d", &add);

        for(;no1<=no2;no1 += add)
                printf("%dcm    %.2fkg \n", no1,(double)0.9*(no1-100));
            
        return 0;
}

 
