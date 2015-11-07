#include <stdio.h>
#include "dateCalc.h"

/// Мне это название функции ни о чем не говорит
int fillStruct(struct date *str) {

  struct date d;

  puts("Введите время отправления поезда в формате DD.MM HH:MI");
  int res = (scanf("%d.%d %d:%d", &d.days, &d.month, &d.hours, &d.mins));

  if (res == 4)
    res = 1;
  else
    res = 0;
  if ((d.month < 0) || (d.month > 12))
    res = 0;
  if ((d.hours < 0) || (d.hours > 23))
    res = 0;
  if ((d.mins < 0) || (d.mins > 59))
    res = 0;
  if ((d.days < 1) || (d.days > months[d.month - 1]))
    res = 0;
  if (res)
    *str = d;
  return res;
}


/// Мне это название функции ни о чем не говорит
/// Почему в функции выше была структура для хранения, а здесь нет?
/// Можно даже использовать ту же, но не заполнять в ней месяцы
/// И проверку корректности времени не копипастить
/// сделать функции -- проверить время, проверить дату -- и использовать либо одну, либо сразу обе
int input(int *days, int *hours, int *mins) {
  puts("Введите время движения поезда в формате DD HH:MI");
  int res = scanf("%d %d:%d", days, hours, mins);
  if ((*mins < 0) || (*mins > 59))
    res = 0;
  if ((*hours < 0) || (*hours > 23))
    res = 0;
  if (res == 3)
    res = 1;
  else
    res = 0;
  return res;
}

void dateCalcUI() {

  struct date d;
  int days, hours, mins;
  if (fillStruct(&d) && input(&days, &hours, &mins)) {
    d = getDate(d, days, hours, mins);
    printf("Поезд приедет %d.%d %d:%d\n", d.days, d.month, d.days, d.mins);
  } else
    printf("Неверный формат введеных данных\n");
}
