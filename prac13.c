#include<stdio.h>
#include<conio.h>

main()
{
	double a,b,c,d,F;
	a=2.9678e-27;
	b=0.876e-38;
	c=7.025e16;				// e = x10^
	d=9.75e12;
	
	F = (a+b)/(c-d);
	
	printf("The result is : %e",F);
	getch();
	
	
}
