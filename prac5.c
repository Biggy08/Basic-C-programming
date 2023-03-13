#include<stdio.h>
#include<conio.h>
//.Calculate area and volume
main()
{
	float r,A,V;
	printf("Enter the radius = ");
	scanf("%f",&r);
	A= 4 * (3.14) *r*r;
	V= (4.0/3.0)*(3.14)*r*r*r;
	printf("Area is %f \n",A);
	printf("Volume is %f",V);
	getch();
}
