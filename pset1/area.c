#include<stdio.h>
# define PI 3.141
void main()
{
	float r,areac;
	float l,b,arear;
	
	printf("\n Enter Radius of circle");
	scanf("%f",&r);
	
	printf("\n Enter length and breadth of rectangle");
	scanf("%f%f",&l,&b);

	areac=r*r*PI;
	arear=l*b;

	printf("\n Area of circle=%f",areac);
		printf("\n Area of rectangle=%f",arear);
}		






