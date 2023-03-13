#include<stdio.h>
#include<conio.h>

main()
{
	float p,n,r,SI;
	printf("Input principle,time and rate\n	");
	scanf("%f%f%f",&p,&n,&r);
	SI = (p*n*r)/100.0;
	printf("Simple Interest = %f",SI);
	getch();
	
}
