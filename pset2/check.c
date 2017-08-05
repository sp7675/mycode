#include<stdio.h>
int main()
{
	int no,n,new_no,a,b,c,d,add;
	
	printf("\n enter 4 digit no");
	scanf("%d",&no);
	n = no;
	a=n % 10;
	n = n / 10;
	 
	b = n % 10;
	n= n / 10;
	
	c = n % 10;
	n = n /10;
	
	d = n;
	
	add = a+b+c+d;
	printf(" sum of digits = %d",add);
	
	if(add % 2==0)
	{
		new_no = no *10;
		printf(" \n old number=%d",no);
		printf("\n new number=%d",new_no);
	}
	else
	{
		new_no = (no*10)+1;
		printf("\n old number=%d",no);
		printf("\n new number=%d",new_no);
	}
}			 
