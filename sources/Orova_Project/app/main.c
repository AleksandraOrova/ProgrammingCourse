//#include"bank.h"
//#include"cm_to_inch.h"
//#include"home.h"
//#include"matrix.h"
#include"bank_console_ui.h"

int main()
{
    int flag = 1, a, b, p, q, r, s, L, isz, jsz;
    while (flag)
    {
        printf("\n");
        printf(" 0 - Exit\n\n");
        printf(" 1 - Homework #1: Input, output and cycles\n\n");
        printf(" 2 - Homework #2 : Loops\n\n");
        printf(" 3 - Homework #3 : Matrixes\n\n");
        switch (getchar())
        {
        case'0':
            flag = 0;
            break;
        case'1':
            Bank_Console_UI();
            break;
        case '2':

            //Home(&a, &b, &p, &q, &r, &s);
            break;
        case'3':
            /*printf("    Homework #2 : Loops \n\n");
            printf("    Please, input the number of centimetres: \n\n\t");
            scanf("%d", &L);
            printf("    Table of conversion from centimetres to inches \n\n");
            Cm_to_Inch(&L);*/
            break;
        case'4':/*
            printf("    Homework #3 : Matrixes \n\n");
            printf("    Vvedite kolichestvo strok: \n\n\t");
            scanf("&d", &isz);
            printf("    Vvedite kolichestvo strok: \n\n\t");
            scanf("&d", &jsz);
            Matrix();*/
            break;
        }
    }
    return 0;
}
