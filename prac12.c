#include<stdio.h>
#include<conio.h>
//12.Reverse a number
main()
{
	int a,n,sum=0;
	printf("Enter a 5 digit number :");
	scanf("%d",&n);
	
	a=n%10;
	sum=sum+(a*10000);
	n=n/10;
	
	a=n%10;
	sum=sum+(a*1000);
	n=n/10;
	
	a=n%10;
	sum=sum+(a*100);
	n=n/10;
	
	a=n%10;
	sum=sum+(a*10);
	n=n/10;
	
	a=n%10;
	sum=sum+a;

	
	printf("Reversed number : %d",sum);
	
	getch();
	
}
