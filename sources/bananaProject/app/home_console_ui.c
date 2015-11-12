#include<stdio.h>
#include"home.h"
#include"home_console_ui.h"

void home_Console_UI()
{
    float a, b, p, q, r, s;
    printf(" Homework #2: Input, output and cycles\n\n");
    printf("\n");
    printf("Exercise #2 \n\n");
    printf("Please, input a, b, p, q and r, s: \n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &p);
    scanf("%f", &q);
    scanf("%f", &r);
    scanf("%f", &s);
    /*
    printf("    Please, input linear dimensions of Your place: \n\n\t");
    //scanf("%f %f", &a, &b);
    printf("    Please, input linear dimensions of the first house: \n\n\t");
    //scanf("%f %f", &p, &q);
    printf("    Please, input linear dimensions of the second house: \n\n\t");
    //scanf("%d %d", &r, &s);*/

    if (home(a, b, p, q, r, s) == 1)
        printf("Yes\n");
    else
        printf("No\n");

}
