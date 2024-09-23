#include<stdio.h>
#include<conio.h>
void main()
{
  int i,n,j,k;
  clrscr();
  printf("Enter any value for n:");
  scanf("%d",& n);
  for(i=1;i<=n;i++)
  {
   for(j=1;j<=n-i;j++)
   {
     printf(" ");
   }
   for(k=1;k<=i;k++)
   {
     printf("%d\t",i);
   }
   printf("\n");
  }
  getch();
}