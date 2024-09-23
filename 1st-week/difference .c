#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n,j,max,min,num,difference;
 clrscr();
 printf("Enter any number:");
 scanf("%d",& n);
 printf("Enter number1:");
 scanf("%d",& j);
 max=j;
 min=j;
 for(i=1;i<n;i++)
 {
  printf("Enter number%d:",i+1);
  scanf("%d",& num);
  if(num>max)
  {
   max=num;
  }
  else if(num<min)
  {
   min=num;
  }
 }
 difference=max-min;
 printf("The difference between the smallest & largest number:%d",difference);
 getch();
}