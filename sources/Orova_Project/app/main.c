#include"bank.h"
#include"cm_to_inch.h"
#include"home.h"
#include"matrix.h"

int main()
{
    int flag = 1, summa, percent, a, b, p, q, r, s, L, isz, jsz;
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
            printf("\n");
            printf(" Homework #1: Input, output and cycles\n\n");
            printf(" 1 - Exercise #1 \n\n");
            printf(" 2 - Exercise #2 \n\n");
            switch (getchar())
            {
            case'1':
                printf("\n");
                printf("  Exercise #1 \n\n");
                printf("    Please, input how much money You want to put to the bank: \n\t");
                scanf("%d", &summa);
                printf("    Please, input what is the percent at Your bank: \n\t");
                scanf("%d", &percent);
                Bank(&summa, &percent);
                break;
            case '2':
                printf("\n");
                printf("  Exercise #2 \n\n");
                printf("    Please, input linear dimensions of Your place: \n\n\t");
                scanf("%d %d", &a, &b);
                printf("    Please, input linear dimensions of the first house: \n\n\t");
                scanf("%d %d", &p, &q);
                printf("    Please, input linear dimensions of the second house: \n\n\t");
                scanf("%d %d", &r, &s);
                Home(&a, &b, &p, &q, &r, &s);
                break;
            }
            break;
        case'2':
            printf("    Homework #2 : Loops \n\n");
            printf("    Please, input the number of centimetres: \n\n\t");
            scanf("%d", &L);
            printf("    Table of conversion from centimetres to inches \n\n");
            Cm_to_Inch(&L);
            break;
        case'3':
            printf("    Homework #3 : Matrixes \n\n");
            printf("    Vvedite kolichestvo strok: \n\n\t");
            scanf("&d", &isz);
            printf("    Vvedite kolichestvo strok: \n\n\t");
            scanf("&d", &jsz);
            Matrix();
            break;
        }
    }
}
