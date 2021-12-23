#include<stdio.h>
main()
{
	float t, r, p,s;
	printf("enter the  value of p");
	scanf("%f",&p);
	printf(" enter time t");
	scanf("%f",&t);
	printf(" enter the rate of interest r");
	scanf("%f",&r);
	s=(p*t*r)/100;
	printf("simple interest is %f",s);
	
	
}
