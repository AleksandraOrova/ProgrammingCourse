
#include<stdio.h>
#include"home.h"
#include"home_console_ui.h"

void home_Console_UI()
{
    float length_horizontal_a, length_vertical_a, length_horizontal_h1, length_vertical_h1, length_horizontal_h2, length_vertical_h2;
    printf(" Homework #2: Input, output and cycles\n\n");
    printf("\n");
    printf("Exercise #2 \n\n");
    printf("Please, input length (horizontal)  of area a, b, p, q and r, s: \n");
    scanf("%f", &length_horizontal_a);
    scanf("%f", &length_vertical_a);
    scanf("%f", &length_horizontal_h1);
    scanf("%f", &length_vertical_h1);
    scanf("%f", &length_horizontal_h2);
    scanf("%f", &length_vertical_h2);
    /*
    printf("    Please, input linear dimensions of Your place: \n\n\t");
    //scanf("%f %f", &a, &b);
    printf("    Please, input linear dimensions of the first house: \n\n\t");
    //scanf("%f %f", &p, &q);
    printf("    Please, input linear dimensions of the second house: \n\n\t");
    //scanf("%d %d", &r, &s);*/

    if (home(length_horizontal_a, length_vertical_a, length_horizontal_h1, length_vertical_h1, length_horizontal_h2, length_vertical_h2) == 1)
        printf("Yes\n");
    else
        printf("No\n");

}
