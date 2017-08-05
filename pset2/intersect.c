#include<stdio.h>
void main()
{
	float x1,x2,y1,y2,m,dx,dy;
	
	printf("\n enter line1 and line2");
	scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
	
	dx=x2-x1;
	dy=y2-y1;
	
	m=dx/dy;
	
	if(m=0)
	{
		printf("\n lines are not intersect");
	}
	else
	printf("\n lines are intersect");
}
