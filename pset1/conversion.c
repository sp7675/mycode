#include<stdio.h>
void main()
{
 float inch,feet,milli,second;

 printf("\n Enter feet\n");
 scanf("%f",&feet);

 inch=(feet/12);

 printf("\n Conversion of feet to inch=%.2f",inch);

 printf("\nEnter millisecond\n");
 scanf("%f",&milli);

 second=milli*1000;
 printf("\n Conversion of millisecond to second=%.2f",second);
} 
