#include<stdio.h>
struct student
{
	int rno,marks,age;
	char NAME[20]
}s;
      void main()
{
	struct student st1,st2;
	printf("\n Enter name of first student");
	gets(st1.NAME);
	printf("\n enter rno, marks, age of first student");
	scanf("%d%d%d",&st1.rno,&st1.marks,&st1.age);
	printf("\n");
	puts(st1.NAME);
	printf("\n %d %d %d",st1.rno,st1.marks,st1.age);
	printf("\n Enter name of second student");
	scanf("%s",&st2.NAME);
	printf("\n enter rno,marks,age of second student");
	scanf("%d%d%d%d",&st2.rno,&st2.marks,&st2.age);
	printf("\n");
	printf("\n %d%d%d",st2.rno,st2.marks,st2.age);

}
		

