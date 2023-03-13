#include<stdio.h>
#include<conio.h>
//11.Sum of digits of a 5 digit number
main()
{
	int a,n,sum=0;
	printf("Enter a 5 digit number: ");
	scanf("%d",&n);
	
	a=n%10;
	sum=sum+a;
	n=n/10;
	
	a=n%10;
	sum=sum+a;
	n=n/10;
	
	a=n%10;
	sum=sum+a;
	n=n/10;
	
	a=n%10;
	sum=sum+a;
	n=n/10;
	
	a=n%10;
	sum=sum+a;
	
	
	printf("Sum of digits : %d",sum);
	getch();
}
