#include<stdio.h>
#include<conio.h>

main()
{
	int n,rem,rev,a=10000;
	printf("Enter a 5 digit number : ");
	scanf("%d",&n);
	
	rem = n%10;
	rev = rev+(rem*a);
	n=n/10;
	a=a/10;
	
	rem = n%10;
	rev = rev+(rem*a);
	n=n/10;
	a=a/10;
	
	rem = n%10;
	rev = rev+(rem*a);
	n=n/10;
	a=a/10;
	
	rem = n%10;
	rev = rev+(rem*a);
	n=n/10;
	a=a/10;
	
	rem = n%10;
	rev = rev+(rem*a);
	n=n/10;
	a=a/10;
	
	
	\
	
	
	
	printf("The reversed number is %d ",rev);
	getch();
	
	
	
}
