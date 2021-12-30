#include<stdio.h>
main()
{
	int num;
	printf("enter the num");
	scanf("%d",& num);
	if(num%1==0)
	{
		printf("divisible by 1\n");
	}
	if  (num%2==0)
	{
		printf("divisible by 2\n");
	}
	if(num%3==0)
	{
		printf("divisible by 3\n");
	}
	if (num%4==0)
	{
		printf("divisible by 4\n");
	}
	
}
