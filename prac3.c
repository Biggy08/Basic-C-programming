#include<stdio.h>
#include<conio.h>
//3.Convert age to days
main()
{
	int y,m,d,age;
	printf("Enter your exact age in years, months and days :\n");
	scanf("%d%d%d",&y,&m,&d);
	age = (y*365)+(m*30)+d;
	printf("Your age in days is %d ",age);
	getch();
	
	
}
