#include<stdio.h>
void main ()
{
	float x1,x2,v1,v2,x;
	printf("enter the velocity and distance of first kangaroos=");
	scanf("%f%f",&v1,&x1);
	printf("enter the velocity and distance of kangaroos second=");
	scanf("%f%f",&x2,&v2);
	if(v1==v2&&x1==x2)
	{
		printf("kangaroos are alkways together\n");
	}
	else
	{
		if(v1<v2||v1==v2||x1==x2||x1>x2)
		{
			printf("they will never meet");
		}
		else
		{
			x=(v2*x1-v1*x2)/(v2-v1);
			printf("they meet after %f meter",x);
		}
	}
}
