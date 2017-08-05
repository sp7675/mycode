#include<stdio.h>
void main()
{
	int age,ticket_charge;
	
	printf("\n enter age of a person");
	scanf("%d",&age);
	
	if(age>=55)
	{
			ticket_charge=100;
	}
	else
	{
		if(age>21&&age<54)
		{
			ticket_charge=155;
			
		}
		else
		{
			if(age>13&&age<20)
			{
				ticket_charge=100;
			}
			else
			{
				ticket_charge=0;
			}
		}
	}
	printf("\n ticket_charge=%dRs",ticket_charge);
}
