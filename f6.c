#include<stdio.h>
void main()
{
int a=0,b=1,i=3,n,c;
printf("enter the range");
scanf("%d %d",&a,&b);
printf("%d %d ",a,b);
while (i<=n)
{
c=a+b;
printf("%d ",c);
a=b;
b=c;
i++;
}
}
