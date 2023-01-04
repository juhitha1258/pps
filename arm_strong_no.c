// to perform program on armstrong number
 #include<stdio.h>
int main()
{
	int num;
	int rem;
	int sum=0;
	int pow;
	int temp;
	printf("enter any num");
	scanf("%d",&num);
	temp = num;
	while(num>0)
{
	rem=num%10;
	pow=(rem*rem*rem);
	sum=sum+pow;
	num=num/10;
}
       if(temp == sum)
{
	printf("%d is a armstrong number",temp);
}
	else
{
	printf("%d is not an armstrong number",temp);
}
       return 0;
}
