#include<stdio.h>
void main()
{
	int n;
	
	printf("\n Enter a no");
	scanf("%d",&n);
	
	
	if(n>0)
	{
		if(n%2==0)
		{
				printf("\n NO is positive and No is Even");
		}
	
		
		else
		{
			printf("\nNO is positive and NO is Odd");
		}

	}
	else
	{
		if(n%2==0)
		{
			printf("\n No is negative and even no");
		}
		else
		{
			printf("\n no is negative and odd");
		}
	}
		
	

}
