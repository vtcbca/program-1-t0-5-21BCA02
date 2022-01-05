/*write a program to enter any number and print of its deigit
date:22/12/2021*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b=0,c;
	clrscr();
	  printf("\n Enter a number:");
	  scanf("%d",&a);
	  while(a>0)
	  {
		c=a%10;
		b=b+c;
		a=a/10;
	   }
	   printf("sum:%d",b);
	   getch();

}