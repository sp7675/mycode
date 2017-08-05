#include<stdio.h>
void main()
{
    float w1,w2,workdone;
    
    printf("\n Actual work in two weeks");
    scanf("%f%f",&w1,&w2);
    
    workdone=((w1+w2)/(2*40))*100;
    
    printf("\n full time equivalent work=%f",workdone);
    
    return;
}    
