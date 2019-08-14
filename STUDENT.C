
#include<stdio.h>
#include<conio.h>
struct student
{
char name[20];
int age;
int marks;
}s1;
int main()
{
clrscr();
printf("Enter The Name Of The Student");
gets(s1.name);
printf("Enter The Age And Marks Of The Student");
scanf("%d %d",&s1 .age ,&s1 .marks);
if(s1.marks<0 && s1.marks>100)
{
printf("Please Enter The Marks Out Of 100");
scanf("%d",&s1.marks);
}
if(s1.age>20 &&s1.marks>=65)
printf("Congrats You Are Eligible");
else
printf("Sorry You Have Not Cleared The Course");
getch();
return 0;
}