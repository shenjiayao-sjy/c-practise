#include <stdio.h>

int main(void)
{       
        int num;
                printf("请输入一个四位整数:");
                scanf("%d", &num);
                
                printf("它的个位是%d,十位是%d,百位是%d,千位是%d。 \n ",num%10,(num/10)%10,(num/100)%10,(num/1000)%10);
                
                return 0;
}               
