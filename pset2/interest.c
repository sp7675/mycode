#include<stdio.h>

int main()
{
	int account_balance,min_balance;
	float tbalance;
 	char savings_account,account_type;
 	char current_account;




	printf("enter type of account");
	scanf("%c",&account_type);
	printf("enter account_balance min_balance");
	scanf("%d%d",&account_balance,&min_balance);

	if(account_type=='s')
	{
		if(account_balance<min_balance)
		{		tbalance=account_balance-100;		
				printf("tbalance=%f",tbalance);
		}	
		else 
		{	
			tbalance=(1.0*account_balance*0.04)+account_balance;
			printf("tbalance=%f",tbalance);
		}

	}

	 if(account_type=='c')
		{						
			if(account_balance < min_balance)
			{		
				tbalance=account_balance-250;
				printf("%f",tbalance);
			}		
							
							
			else
			{
				 if(account_balance>(min_balance+5000))
					{	
						tbalance=(0.05*account_balance)+account_balance;
						printf("%f",tbalance);
					}
		
				else	
				{
					tbalance=(0.03*account_balance)+account_balance;
					printf("tbalance=%f",tbalance);
				}				
			}								
		}					
}
