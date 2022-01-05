/* write a program to enter any number and check it its armstrong number or not
date:22/12/2021*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c=0,d;
	clrscr();
	printf("\n Enter the Number:");
	scanf("%d",&a);
	d=a;
	while(a>0)
	{
		b=a%10;
		c=c+(b*b*b);
		a=a/10;
	}
	if(d==c)
	   printf("\n Armstrong Number");
	else
	   printf("\n Not Armstrong Number");
	getch();
}
