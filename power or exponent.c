#include<stdio.h>
#include<coio.h>
void main();
{
int base,exponent,result=1;
printf("enter the base");
scanf("%d",&base);
printf("enter the exponent");
scanf("%d",&exponent);
while(exponent!=0)
{
result*=base;
--exponent;
}
printf("answer=%d",result);
getch();
}
