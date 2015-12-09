#include <stdio.h>
#include"bank_console_ui.h"
#include"home_console_ui.h"
#include"cm_to_inch_console_ui.h"
#include"matrix_console_ui.h"
#include"strings_console_ui.h"

void printHelp()
{
    printf("Запустите программу с одним из параметров:\n");
    printf("-bank - решение банковской задачи\n");
    printf("-home - решение задачи про дома\n");
    printf("-cm2inch - таблица перевода из сантиметров в дюймы\n");
    printf("-matrix - работа с матрицами\n");
    printf("-strings - выравнивание текста по ширине(5 строк)\n");
}

int strEquals(char* str1, char* str2)
{
    int i, res = 0;
    for(i = 0; str1[i] != '\0' && str2[i] != '\0'; i++)
        if (str1[i]!=str2[i])
            res++;
    //printf("\t\tS1%s\n", str1);
    //printf("\t\tS2%s\n", str2);
    return(res>0 ? 0 : 1);
}

int main(int argc, char *argv[])
{
    printf("\n\nПуть для терминала %s", argv[0]);
    printf("\n\nSTART OF WORK\n");
    if(argc>1){
        if(strEquals(argv[1], "-bank")) bank_Console_UI();
        if(strEquals(argv[1], "-home")) home_Console_UI();
        if(strEquals(argv[1], "-cm2inch")) cm_to_inch_console();
        if(strEquals(argv[1], "-matrix")) matrix_console_UI();
        if(strEquals(argv[1], "-strings")) strings_console_UI();
    }else{
        printHelp();
    }
    printf("\nEND OF WORK\n\n");

    return 0;
}

