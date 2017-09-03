#include<stdio.h>
void main()
{
int x,s=0;
printf("enter a value:");
scanf("%d",&x);
while(x>0)
{
s=(s=*10)+(x%10);
x=x/10;
}
printf("reverse no:%d",s);
}
