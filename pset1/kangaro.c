

#include <stdio.h>

int main()
{
	float x1, x2, v1,v2, x; 

	printf("\n Assuming kangroo A is behind kangroo B\n");

	printf("\nEnter velocity and distance of kangroo A: ");
	scanf("%f%f", &v1, &x1);
	printf("\nEnter velocity and distance of kangroo B: ");
	scanf("%f%f", &v2, &x2);

	if (v1>0&&v2>0&&x1>0&&x2>0) 
	{
	
		if(v1 == v2 && x1 == x2) 
			printf("\nTwo kangroos are always together\n\n");
			
		else
		{ 
			if(v1 < v2 || v1 == v2 || x1 > x2 || x1 == x2) 
				printf("\nThe two kangroos shall never meet\n\n");
			
			else 
			{
				x = (v2*x1 - v1*x2) / (v2 -v1);
				printf("\nThe two kangroos  meet after %f meters\n\n", x );

			}	
		}	
	}
		else
		printf("\nINVALID INPUT\n");
		
	
	return 0;
}


