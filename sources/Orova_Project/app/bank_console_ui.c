#include<stdio.h>
#include"bank.h"
#include"bank_console_ui.h"

void Bank_Console_UI()
{
    float summa, percent;
    printf(" Homework #1: Input, output and cycles\n\n");
    printf("\n");
    printf("  Exercise #1 \n\n");
    printf("    Please, input how much money You want to put to the bank: \n\t");
    scanf("%f", &summa);
    printf("    Please, input what is the percent at Your bank: \n\t");
    scanf("%f", &percent);

    printf("After 5 years You will have %d rubbles.\n\n", Bank(summa, percent));
}
