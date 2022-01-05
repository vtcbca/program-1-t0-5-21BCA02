/* write a program to enter any number and check number is palindrom or not
date:5/1/2022*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c=0,d;
	clrscr();
	printf("\n Enter the number:");
	scanf("%d",&a);
	d=a;
	while(a>0)
	{
	  b=a%10;
	  c=(c*10)+b;
	  a=a/10;
	}
	 if(d==c)
	   printf("\n palindrom number");
	 else
	   printf("\n Not palindrom");
	 getch();
}