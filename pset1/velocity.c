#include<stdio.h>
void main()
{  
					float d,v1,v2,t;
					printf("\n Enter Distance\n");
					scanf("%f",&d);
					printf("\n Enter two Velocities\n");
					scanf("%f%f",&v1,&v2);
					t=((d/2)/v1)+((d/2)/v2);
					printf("\n total time to complete distance =%.2fkm is %.2f hrs\n ",d,t);
}

	
	
