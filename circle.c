#include<stdio.h>
main()
{
	float a, c, pi=3.14 ,r;
	printf("enter the value of radius");
	scanf("%f",&r);
	a=pi*r*r;
	c=2*pi*r;
	printf(" area of a circle is %.2f",a);
	printf("\ncircumference of a circle is %.2f",c);
}

