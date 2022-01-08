#include<stdio.h>
main()
{
	int a,b,is_duck=0;
	scanf("%d", &a);
	while(a>0)
	{
		b=a%10;
		if(b==0)
		{
			is_duck=1;
			break;
		}
		a=a%10;
	}
	
	if(is_duck==1)
	{
		printf("duck number");
	}
	else
	{
		printf("not a duck number");
	}
	
}
