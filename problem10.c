#include <stdio.h>
#include <stdlib.h>

int main()
{
    int days,weeks,years,redays;
    printf("enter the number of days\n");
    scanf("%d",&days);
    years = days /365;
    weeks =(days-(years*365))/7;
    redays = days -((years*365)+(weeks*7));
    printf("number of years = %d\n",years);
    printf("number of weeks = %d\n",weeks);
    printf("number of remaining days = %d\n",redays);


    return 0;
}
