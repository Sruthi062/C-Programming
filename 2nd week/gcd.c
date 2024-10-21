#include<stdio.h>
#include<conio.h>
void main()
{
  int n1,n2,i,j,max;
  clrscr();
  printf("Enter 1st number:");
  scanf("%d",& n1);
  printf("Enter 2nd number:");
  scanf("%d",& n2);
  if(n1<n2){
    j=n1;
  }else{
    j=n2;
  }
  for(i=1;i<=j;i++)
  {
    if(n1%i==0){
       if(n2%i==0){
           max=i;
       }
    }
  }
  printf("The Greatest common divisor is:%d",max);
  getch();
}