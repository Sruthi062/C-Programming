#include<stdio.h>
#include<conio.h>
void main()
{
int first,second;
char op ;
clrscr();
printf ("enter operator(+,-,*,/)");
scanf("%c",&op);
printf("enter first,second");
scanf("%d %d",&first,&second);
switch(op)
{
case '+':
   printf("%d+%d=%d",first, second,first+second);
   break;
case '-' :
   printf("%d-%d=%d",first,second,first-second);
   break;
case'*' :
   printf("%d*%d=%d",first,second,first*second);
   break;
case'/': 
   printf("%d/%d=%d",first,second,first/second);
   break;
default:
   printf("no other op");
}
getch();
}