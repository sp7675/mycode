#include<stdio.h>
void main()
{
    float avg,totalcost,price;
    
    printf("\n Enter avg and avg cost of petrol");
    scanf("%f%f",&avg,&price);
    
    totalcost=(360/avg)*price;
    
    printf("\n cost of petrol=%f",totalcost);
    
    return;
}    
    
