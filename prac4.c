#include<stdio.h>
#include<conio.h>
//4.Calculate the permeter and area
main()
{
	int l,b;
	printf("Length=");
	scanf("%d",&l);
	printf("Breadth=");
	scanf("%d",&b);
	int P=2*(l+b);
	int A=l*b;
	printf("Perimeter=%d\n",P);
	printf("Area=%d\n",A);
	getch();
	
}
