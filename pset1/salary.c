#include<stdio.h>
void main()
{
	float bsalary,hl,hi,salary;// hl=home loan hi=health insurance.  

	printf("\n Enter basic salary");
	scanf("%f",&bsalary);

	printf("\n Enter home loan and health insurance");
	scanf("%f%f",&hl,&hi);

	salary=bsalary-hl-hi;

	printf("\n Total salary=%f",salary);
}	

	
