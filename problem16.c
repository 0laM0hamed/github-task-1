#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m1,m2,m3,m4,m5,total,avarage,percentage;
    printf("enter the first mark\n");
    scanf("%f",&m1);
    printf("enter the second mark\n");
    scanf("%f",&m2);
    printf("enter the third mark\n");
    scanf("%f",&m3);
    printf("enter the fourth mark\n");
    scanf("%f",&m4);
    printf("enter the fifth mark\n");
    scanf("%f",&m5);
    total= m1+m2+m3+m4+m5;
    avarage=total /5;
    percentage=(total/500)*100;
    printf("Total = %f\n",total);
    printf("Avarage = %f\n",avarage);
    printf("Percentage =%f\n",percentage);

        return 0;
}
