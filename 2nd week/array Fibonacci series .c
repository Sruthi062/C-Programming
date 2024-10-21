#include<stdio.h>
#include<conio.h>
void main()
{
  int i,n,a=0,b=1,c;
  clrscr();
  printf("Enter number of terms:");
  scanf("%d",& n);
  for(i=0;i<n;i++)
  {
   if(i<=1){
    c=i;
   }
   else{
    c=a+b;
    a=b;
    b=c;
   }
   printf("%d\t",c);
   }
  getch();
}