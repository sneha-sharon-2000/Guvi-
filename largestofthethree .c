#include<stdio.h>
#include<conio.h>
int main()
{
int n1,n2,n3;
printf("enter the three different numbers");
scanf("%d %d %d", &n1,&n2,&n3);
if(n1>=n2 && n1>=n3)
printf("%d is the largest number",n1);
if(n2>=n1 && n2>=n3)
printf("%d is the largest number",n2);
if(n3>=n1 && n3>=n2)
prnitf("%d is the largest number",n3);
}
