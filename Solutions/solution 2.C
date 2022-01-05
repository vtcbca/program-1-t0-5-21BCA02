/*write  a program enter any number and print it revers
date:22/12/2021*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b=0,c;
	clrscr();
	printf("\n Enter number:");
	scanf("%d",&a);
	while(a!=0)
	{
		c=a%10;
		b=b*10+c;
		a/=10;
	}
	printf("\ Reversed Number:%d",b);
	getch();
}