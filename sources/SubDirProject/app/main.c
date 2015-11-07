#include <stdio.h>
#include "bank.h"
#include "factorizationui.h"
#include "arraysui.h"
#include "home.h"

int main()
{
    int flag = 0;

    while(flag)
    {
        printf(" 1. Банковская операция со сложными процентами \n\n");
        printf(" 2. Таблица перевода из сантиметров в дюймы\n\n");
        printf(" 3. Заполнение матрицы по спирали\n\n");

        switch (getch())
        {
            case'0':
                flag = 0;
            break;
            case 1:
                Bank();
            break;
            case 2:
                House();
            break;
            case 3:
                C_and_I();
            break;
            case 4:
                Matrix();
            default:
                printf("Неверный ввод данных");
            break;
        }
    }
  return 0;
}
