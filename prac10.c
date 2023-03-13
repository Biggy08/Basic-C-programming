#include<stdio.h>
#include<conio.h>
//.10 To print wtih expressions
main()
{
	int a,b,s,d,p,q,r;
	printf("Enter two numbers :\n");
	scanf("%d%d",&a,&b);
	s=a+b;
	d=a-b;
	p=a*b;
	q=a/b;
	r=a%b;
	printf("%d+%d=%d\n",a,b,s);
	printf("%d-%d=%d\n",a,b,d);
	printf("%d*%d=%d\n",a,b,p);
	printf("%d/%d=%d\n",a,b,q);
	printf("Remainder of a/b: %d",r);
	getch();
}
