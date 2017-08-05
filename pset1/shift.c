

#include <stdio.h>

int main()
{
	float x1,y1,x2,y2,x3,y3; 
	
	printf("\nEnter the point about which other point shall rotate: ");
	scanf("%f%f", &x1, &y1);
	
	printf("\nEnter the point to be rotated: ");
	scanf("%f%f", &x2, &y2);
	

	x3 =  2*x1 - x2;
	y3  = 2*y1 - y2;
	
	printf("\nWhen (%.2f,%.2f) is rotated around (%.2f,%.2f) by 180ᵒ we get (%.2f,%.2f)\n\n",x1,y1, x2,y2, x3,y3);
	
	
	return 0;
}



