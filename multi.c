#include<stdio.h>
void main()
{
int i,x,s;
printf("enter a value :");
scanf("%d",&x);
for(i=1;i<=20;i++)
{
s=s*i;
printf("/n %d*%d=%d",i,x,s);
}
}
