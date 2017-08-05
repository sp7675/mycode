

#include <stdio.h>
#define BROKERAGE 0.0003
#define SERVICE_TAX 0.1036
#define STT 0.00025
#define STAMPDUTY 0.0002
#define REGULATORY_CHARGE 0.00004

int main()
{
	int shareNo;

	float buy_rate, costprice, buy_brokerage, buy_servicetax;

	printf("\nEnter costprice of share: ");
	scanf("%f",&buy_rate);
	printf("\nEnter no of shares brought: ");
	scanf("%d",&shareNo);

	costprice = shareNo * buy_rate;
	buy_brokerage = costprice * BROKERAGE;
	buy_servicetax = buy_brokerage * SERVICE_TAX;

	float sell_rate, sellprice, sell_brokerage, sell_servicetax, sell_STT;

	printf("\nSELLING: \n");
	printf("\nEnter sell price of share: ");
	scanf("%f",&sell_rate);

	sellprice = shareNo * sell_rate;
	sell_brokerage = sellprice * BROKERAGE;
	sell_servicetax = sell_brokerage * SERVICE_TAX;
	sell_STT = sellprice * STT;

	float turnover, stampduty, regulatory_charge;

	turnover = costprice + sellprice;
	stampduty = turnover * STAMPDUTY;
	regulatory_charge = turnover * REGULATORY_CHARGE;


	 float totalTax, balance;

	 totalTax = buy_brokerage + buy_servicetax + sell_brokerage + sell_servicetax + sell_STT + stampduty + regulatory_charge;

	 balance = sellprice - costprice - totalTax;

	 printf("\nTRANSACTIONS: \n");

	 printf("\nBUYING: ");
	 printf("\nBuyrate: %.2f", buy_rate);
	 printf("\nQuantity: %d", shareNo);
	 printf("\nCostprice: %.2f\n", costprice);

	 printf("\nSELLING: ");
	 printf("\nSellrate: %.2f", sell_rate);
	 printf("\nQuantity: %d", shareNo);
	 printf("\nSellprice: %.2f\n",sellprice);

	 printf("\nTotal charges including all the taxes: %.2f", totalTax);
	 printf("\nYour total turnover is: %.2f", turnover);

	 if (balance > 0)
	 	printf("\nYou earned a profit of rs.%.2f\n\n",balance );
	 else
	 	printf("\nYou incurred a loss of rs.%.2f\n\n",balance * -1 );
	
	
	return 0;
}



