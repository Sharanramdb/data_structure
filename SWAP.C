#include<stdio.h>
#include<conio.h>
void swap(int *c,int *d);
int main()
{
int a,b;
printf("Enter the two numbers");
scanf("%d %d" ,&a ,&b);
swap(&a,&b);
printf("After swapping a is :%d and b is :%d",a,b);
getch();
return 0;
}
void swap(int*c,int*d)
{
int x;
x=*c;
*c=*d;
*d=x;
}