#include<stdio.h>
#include<conio.h>
void main()
{
  int i,num,fact=1;
  clrscr();
  printf("Enter number:");
  scanf("%d",& num);
  for(i=1;i<=num;i++)
  {
   fact=i*fact;
  }
  printf("The factorial of the number %d:%d",num,fact);
  getch();
}