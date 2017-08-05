#include<stdio.h>
void main()
{
    int original_cost,shipping_cost,handling_cost,cost_online,petrol_cost,cost_offline;
    
    printf("\n Enter original cost ,shipping cost,handling cost,petrol cost");
    scanf("%d%d%d%d",&original_cost,&shipping_cost,&handling_cost,&petrol_cost);
    
    cost_online=original_cost+shipping_cost+handling_cost;
    
    cost_offline=original_cost+(30*petrol_cost);
    
    if((cost_online - cost_offline) > 0)
    {
        printf("\n cost through offline");
    }
    else
    {
        if((cost_online - cost_offline) < 0)
        {
            printf("\n cost through online");
        }
        else
        {
            printf("\nprefer cost through online because its time saver");
        }
    }
}                     
