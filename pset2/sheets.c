#include<stdio.h>
int main()
{
	int paper,p1000=0,p500=0,p100=0,single=0;
	float price;
	
	printf("\n Enter no paper");
	scanf("%d",&paper);
	
	if(paper > 1000)
	{
		
		p1000 = paper / 1000;
		paper = paper % 1000;
		
	}
	if(paper > 500)
	{
		p500 = paper / 500;
		paper = paper % 500;
	
	}
	if(paper > 100)
	{
		p100 = paper / 100;
		paper = paper % 100; 		
	}
	single=paper;
	printf("\nno of package of1000 sheets = %d \n no of package of 5000 sheets = %d\n no of package of100 sheets = %d \n no of package of single sheets = %d",p1000,p500,p100,single);
	
	price = (0.10*single)+(0.055*p100*100)+(0.04*p500*500)+(0.03*p1000*1000);
	
	printf("\n price = %.2f",price);
}	
