#include<stdio.h>
int main()
{
char a[10],i,count=0;
for(i=0;i<10;i++)
{
scanf("%c",&a[i]);
}
for(i=0;i<10;i++)
{
if((a[i]=='a')!!(a[i]=='e')!!(a[i]=='i')!!(a[i]=='o')!!(a[i]=='u'))
{
count=count++;
}
}
if(count>=1)
{
printf("yes");
}
else
{
printf("no");
}
}
