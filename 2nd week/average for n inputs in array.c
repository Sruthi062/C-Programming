#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,mark[40];
  float total=0,average;
  clrscr();
  printf("Enter no. of students:");
  scanf("%d",& n);
  for(i=1;i<=n;i++)
  {
    printf("Enter Student's mark:");
    scanf("%d",& mark[i]);
    total+=mark[i];
  }
  average=total/n;
  printf("The average mark is:%.2f",average);
  getch();
}