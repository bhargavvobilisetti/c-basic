#include<stdio.h>
main()
{
	int units;
	float amount, charge, total_bill, surcharge=0.00;
	printf("units consumed");
	scanf("%d", &units);
	if (units<=199)
	{
		charge = 1.20;
		
	} 
	else if(units>=200 && units<400)
	{
		charge =1.50;
		
	}
	else if(units>=400 && units<600)
	{
		charge = 1.80;
	}
	else 
	{
		charge = 2.00;
	  
	}
	amount=units*charge;
	if(amount>600)
	{
		surcharge=amount*0.15;
	}
	
            total_bill=amount+surcharge;
	printf("units: %d\n", units);
	printf("amount: %.2f\n", amount);
	printf("surcharge: %.2f\n", surcharge);
	printf("total_bill: %.2f\n", total_bill);
}
