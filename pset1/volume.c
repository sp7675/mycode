#include<stdio.h>
# define PI 3.141
void main()
{
	float r,volume;

	printf("\n Enter Radius of Volume");
	scanf("%f",&r);

	volume=(4.0/3)*PI*r*r*r;

	printf("\n volume of Sphere=%f",volume);
}	
	
