#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,x,c,y;
    
    printf("\n Enter the a,b amd x");
    scanf("%d%d%d",&a,&b,&x);
    y=pow(a,b);
    printf("\n y=%d",y);
    c=y-(y%x);
    
    printf("\n multiple of x=%d",c);
    return;
}    
