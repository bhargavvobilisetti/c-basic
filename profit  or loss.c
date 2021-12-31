#include<stdio.h>
main()
{
	int cp, sp, l, p;
	float per;
	printf("enter the amount of sp");
	printf("\n enter the amount of cp");
	scanf("%d%d",&cp,&sp);
	if(sp>cp)
	{
		printf("profit");
		p=sp-cp;
		per=p*100/cp;
	}
	else if(cp>sp)
	{
		printf("loss\n");
		l=cp-sp;
		per=l*100;
	}
}
