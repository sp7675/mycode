

#include <stdio.h>

int main()
{
	int cookies, guest;



		printf("\nEnter no of cookies and no of guest:  ");
		scanf("%d %d", &cookies, &guest);
	
	

	if ( cookies == 0 ) 
		printf("\nExtra cookies required are %d\n\n", guest);

	else 
	{
		
		if (cookies % guest == 0) 
			printf("\nNo extra cookies required!!\n\n");

		else 
			printf("\nExtra cookies required are : %d\n\n", guest - (cookies % guest));

	}	
	return 0;
}	




	
	
