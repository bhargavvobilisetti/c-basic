#include<stdio.h>
main()
{
	int  a,b,c,d;
	printf("enter 4 numbers");
	scanf("%d%d%d%d", &a,&b,&c,&d);
	if(a>b && a>c && a>d)
	{
		printf("%d",a);
	}
	else if(b>a && b>c &&  b>c )
	{
		printf("%d",b);
	}
	else if(c>a && c>b && c>d)
	{
		printf("%d",c);
	}
	else
	{
		printf("%d",d);
	}
}
