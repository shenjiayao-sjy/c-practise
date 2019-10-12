#include <stdio.h>

int main(void)
{
     int no;
     int i=0;
     int no1;

     do{
	     printf("请输入一个正整数:");
	     scanf("%d", &no);
	     if(no <= 0)
		     puts("\a 请不要输入非正整数。");
     }while(no <= 0);

     no1=no;

     while(no>0){
              
                   no /= 10;
                   i++;
                 }
                 printf("%d的位数是%d", no1,i );

                  return 0 ;
 } 
