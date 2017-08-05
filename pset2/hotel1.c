#include <stdio.h>
int main()
 {
 int people=0,price=0,person,price1=850,price2=900,price3=950;
 float discount=0.0,discount1,discount2,discount3;
 char ask;
 char ask2;
 printf("for 2 people our expense is 850 \n and for 3 people is 900 \n and for 4 people is 950s \nAdditional peoples we charge 600  per person\n");
 printf("HOW MANY PEOPLE ARE YOU? \n");
 scanf("%d",&people);

 if(people==2)
 {
  printf("your price is %d$\n",price1);
  printf("is you are stayning of business company:\n");
    printf("if yes the press 'y'\nif no press 'n'");
    scanf(" %c",&ask);
    printf("is you are over 60 years age?\n");
        printf("is yes then press 'y' if no than pess 'n'");
        scanf(" %c",&ask2);
    if(ask=='y' && ask2=='n')
        {
        discount1=price1*0.20;
        discount1=price1-discount1;
        printf("after dicount your room price is:%f\n",discount1);
        }
        else if(ask=='y' && ask2=='y')
        {
             printf("you cant get both discounts we off you only 20%\n");
             discount1=price1*0.20;
             discount1=price1-discount1;
             printf("after dicount your room price is:%f\n",discount1);
        }
        else if(ask=='n' && ask2=='y')
        {
             discount1=price1*0.15;
             discount1=price1-discount1;
             printf("after dicount your room price is:%f\n",discount1);
        }
        else
        {
            printf(" please pay amount",price1);
        }
 }
 else if(people==3)
 {
  printf("your price is %d$\n",price2);
  printf("is you are stayning of business company:\n");
    printf("if yes the press 'y'\nif no press 'n'");
    scanf(" %c",&ask);
    printf("is you are over 60 years age?\n");
        printf("is yes then press 'y' if no than pess 'n'");
        scanf(" %c",&ask2);
    if(ask=='y' && ask2=='n')
        {
        discount2=price2*0.20;
        discount2=price2-discount2;
        printf("after dicount your room price is:%f\n",discount2);
        }
        else if(ask=='y' && ask2=='y')
        {
             printf("you cant get both discounts we off you only 20%\n");
             discount2=price2*0.20;
             discount2=price2-discount2;
             printf("after dicount your room price is:%f\n",discount2);
        }
        else if(ask=='n' && ask2=='y')
        {
             discount2=price2*0.15;
             discount2=price2-discount2;
             printf("after dicount your room price is:%f\n",discount2);
        }
        else
        {
            printf(" please pay amount",price2);
        }
 }
 else if(people==4)
 {
  printf("your price is %d$",price3);
        printf("is you are stayning of business company:\n");
    printf("if yes the press 'y'\nif no press 'n'");
    scanf(" %c",&ask);
    printf("is you are over 60 years age?\n");
        printf("is yes then press 'y' if no than pess 'n'");
        scanf(" %c",&ask2);
    if(ask=='y' && ask2=='n')
        {
        discount3=price3*0.20;
        discount3=price3-discount3;
        printf("after dicount your room price is:%f\n",discount3);
        }
        else if(ask=='y' && ask2=='y')
        {
             printf("you cant get both discounts we off you only 20%\n");
             discount3=price3*0.20;
             discount3=price3-discount3;
             printf("after dicount your room price is:%f\n",discount3);
        }
        else if(ask=='n' && ask2=='y')
        {
             discount3=price3*0.15;
             discount3=price3-discount3;
             printf("after dicount your room price is:%f\n",discount3);
        }
        else
        {
            printf("please pay amount",price3);
        }
 }
 else if(people>4)
 {
        person=people-4;

        people=person*600;
  price=people+950;
        printf("%d is your cost of room \n",price);
        printf("is you are stayning of business company:\n");
    printf("if yes the press 'y'\nif no press 'n'");
    scanf(" %c",&ask);
    printf("is you are over 60 years age?");
        printf("is yes then press 'y' if no than pess 'n'");
        scanf(" %c",&ask2);
    if(ask=='y' && ask2=='n')
        {
        discount=price*0.20;
        discount=price-discount;
        printf("after dicount your room price is:%f\n",discount);
        }
        else if(ask=='y' && ask2=='y')
        {
             printf("you cant get both discounts we off you only 20%\n");
             discount=price*0.20;
             discount=price-discount;
             printf("after dicount your room price is:%f\n",discount);
        }
        else if(ask=='n' && ask2=='y')
        {
             discount=price*0.15;
             discount=price-discount;
             printf("after dicount your room price is:%f\n",discount);
        }
        else
        {
            printf("please pay amount",price);
        }
}
return 0;

}
