#include <stdio.h>
#include"bank_console_ui.h"
#include"home_console_ui.h"
#include"cm_to_inch_console_ui.h"
#include"matrix_console_ui.h"

int main(void)
{
    int flag = 1;
    while (flag)
    {
        printf("\n");
        printf(" 0 - Exit\n\n");
        printf(" 1 - Homework #1: BANK\n\n");
        printf(" 2 - Homework #2 : HOMES\n\n");
        printf(" 3 - Homework #3 : CM to INCH\n\n");
        printf(" 4 - Homework #4 : Matrixes\n\n");
        printf(" 5 - Homework #5 : Strings\n\n");
        switch (getchar())
        {
        case'0':
            flag = 0;
            break;
        case'1':
            bank_Console_UI();
            break;
        case '2':
            home_Console_UI();
            break;
        case'3':
            cm_to_inch_console();
            break;
        case'4':
            matrix_console_UI();
            break;
        case'5':
            strings_console_UI();
            break;
        }
    }
    return 0;
}

