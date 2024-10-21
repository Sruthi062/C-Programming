#include<stdio.h>
#include<conio.h>
void main()
{
  int i,n,marks[40],total=0;
  float avg;
  clrscr();
  for(i=1;i<=40;i++)
  {
    printf("Enter Student's mark:");
    scanf("%d",& marks[i]);
    total=total+marks[i];
  }
  avg=total/40;
  printf("The average mark is:%.2f",avg);
getch();
}