/* WAP for following patten
*****
***
*
date:29/12/2021*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=5;i>0;i=i-2)
	{
		for(j=0;j<i;j++)
		{
			printf("*");
		}
       printf("\n");
       }
       getch();
}