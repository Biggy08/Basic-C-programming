#include<stdio.h>
#include<conio.h>
//6.Celsius to Farhenite
main()
{
	float C,F;
	printf("Enter temperature in Celsius=");
	scanf("%f",&C);
	F= C*1.8+32;
	printf("Temperature in Farhenite %f",F);
	getch();
	
}

