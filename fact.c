#include<stdio.h>
void main()
{
int i,x,f=1;
printf("enter a value:");
scanf("%d",&x);
for(i=1;i<=x;i++)
{
f=f*i;
}
printf("fact is:%d",f);
}
