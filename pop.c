#include<stdio.h>
void main()
{
float a,b,c;
int d,e;
printf("enter the values");
scanf("%f %f ", &a,&b);
scanf("%d %d ",&d,&e);
c=a+b;
printf("the sum is %f",c);
c=a-b;
printf("the sub is %f",c);
c=a*b;
printf("the mul is %f",c);
c=a/b;
printf("the division is %f",c);
}
