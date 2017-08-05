#include<stdio.h>
void main()
{
	int work_hours;
	float bsalary,salary;
	
	printf("\n Enter base salary");
	scanf("%f",&bsalary);
	
	printf("\n Enter work hours");
	scanf("%d",&work_hours);
	
	if(work_hours>40)
	{
		if(work_hours>60)
		{
			salary=work_hours*bsalary*(175.0/100);
		}
		else
		{
			salary=work_hours*bsalary*(150.0/100);
		}
	}
	else
	{
		salary=work_hours*bsalary;
	}
	
	printf("\n salary=%.2f",salary);
	
}
