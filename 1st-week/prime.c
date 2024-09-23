#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,j,m;
  clrscr();
  printf("Enter n value:");
  scanf("%d",& n);
  for(i=1;i<=n;i++)
  {
    m=1;
    for(j=2;j<=i/2;j++)
    {
     if(i%j==0)
	m=0;
	break;
    }
    if(m==1)
     printf("%d\n",i);
  }
  getch();
}