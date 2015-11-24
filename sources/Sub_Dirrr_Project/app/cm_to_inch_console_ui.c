#include<stdio.h>
#include"cm_to_inch_console_ui.h"
#include"cm_to_inch.h"

void cm_to_inch_console()
{
    int a;
    printf("Input cm");
    scanf("%d", &a);
    float i, temp, tempInch = 1;
    for (i = 1; i<=a; i++)
    {
        temp = cm_to_inch(i);
        if (temp < tempInch)
            printf("%.2f\t%.2f\n", temp, i);
        else
        {
            printf("%.2f\t%.2f\n", tempInch, inch_to_cm(tempInch));
            i--;
            tempInch++;
        }

    }
}

