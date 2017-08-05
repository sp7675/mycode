

#include <stdio.h>
#define CARTON_CAPACITY 3.78
#define MILK_COST 23.45
#define PROFIT 15.75

int main()
{

	float milk_produced, t_milk_cost, cartons, t_profit; 

	printf("\nEnter liters of milk produced: ");
	scanf("%f",&milk_produced);

	cartons = milk_produced / CARTON_CAPACITY;
	t_milk_cost = milk_produced * MILK_COST;
	t_profit = cartons * PROFIT;

	printf("\nNo of cartons required are: %d\n", (int)cartons ); 
	printf("\nTotal milk cost: %.2f\n",t_milk_cost);
	printf("\nTotal profit: %.2f\n\n",t_profit );
	

	return 0;
}


