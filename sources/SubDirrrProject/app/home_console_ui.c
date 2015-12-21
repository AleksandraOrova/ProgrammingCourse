
#include<stdio.h>
#include"home.h"
#include"home_console_ui.h"

void home_Console_UI()
{
    printf(" Homework #2: Input, output and cycles\n\n");
    printf("\n");
    printf("Exercise #2 \n\n");
    printf("Please, input length (horizontal)  of area a, b, p, q and r, s: \n");
    Size home1, home2, area;
    scanf("%f", &area.width);
    scanf("%f", &area.height);
    scanf("%f", &home1.width);
    scanf("%f", &home1.height);
    scanf("%f", &home2.width);
    scanf("%f", &home2.height);

    if (home(area, home1, home2) == 1)
        printf("Yes\n");
    else
        printf("No\n");

}
