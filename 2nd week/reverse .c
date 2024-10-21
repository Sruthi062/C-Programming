#include<stdio.h>
#include<conio.h>
void main()
{
 int i,num,rem,sum=0;
 clrscr();
 printf("Enter the number to be reversed:");
 scanf("%d",& num);
 for(i=1;i<=num;i++)
 {
  rem=num%10;
  num=num/10;
  sum=(sum*10)+rem;
 }
 printf("The reversed number is:%d",sum);
 getch();
}