#include<stdio.h>
void main()
{
	float min_charge=155,rate2000=0.0175,rate3000=0.0200,max_charge=700,waterbill;
	int cusm_water;
	
	printf("\n Enter consumed water in cuft");
	scanf("%d",&cusm_water);
	
	if(cusm_water<1000)
	{
		waterbill=min_charge;
		printf("\n waterbill=%.2f",waterbill);
	}
	else
	{
		if(cusm_water<=2000)
		{
			waterbill=min_charge+(cusm_water-1000)*rate2000;
			printf("\n waterbill=%.2f",waterbill);
			
		}
		else
		{
			if(cusm_water<=3000)
			{
				waterbill=min_charge+1000*rate2000+(cusm_water-2000)*rate2000;
				printf("\n waterbill=%.2f",waterbill);
			}
			else
			{
				waterbill=max_charge;
				printf("\n waterbill=%.2f",waterbill);
			}
		}
	}
	
	
}
