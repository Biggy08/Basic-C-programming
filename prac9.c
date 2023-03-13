#include<stdio.h>
#include<conio.h>
//9. Enter 4 numbers and percentage of each of the total sum.
main()
{
	float a,b,c,d,sum,p1,p2,p3,p4;
	printf("Enter 4 numbers : \n");
	scanf("%f%f%f%f",&a,&b,&c,&d);
	sum=a+b+c+d;
	p1=(a*100)/sum;
	p2=(b*100)/sum;
	p3=(c*100)/sum;
	p4=(d*100)/sum;
	printf("Respective percentage : %f,%f,%f,%f",p1,p2,p3,p4);
	getch();
	
	
}
