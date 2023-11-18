#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day, month, year;


    printf("Please read a valid date: ");
    scanf("%d/%d/%d", &day, &month, &year);

    if(day > 31 || year < 0 || month > 12 || day <=0 || month <=0)
    {

        printf("invalid date\n");
    }
    else if((month==4 || month==6  || month== 9 || month==11) && day ==31)
    {
        printf("invalid date\n");
    }

    else if(month == 2 && day > 29)
    {
        printf("invalid date\n");
    }

    else
    {
        printf("valid date\n");
    }



    return 0;
}
