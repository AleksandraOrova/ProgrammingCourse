
#include <stdio.h>
#include "sumDates.h"

int checkDate(int month, int day) {
  if (((day > 0) && (day <= numberOfDaysInMonths[month - 1])) &&
      ((month > 0) && (month <= 12)))
    return 1;
  else
    return 0;
}

int checkTime(int hours, int mins) {
  if (((hours >= 0) && (hours < 24)) && ((mins >= 0) && (mins < 60)))
    return 1;
  else
    return 0;
}
int startTimeInput(struct date *str) {

  struct date d;

  puts("Введите время отправления поезда в формате DD.MM HH:MI");
  if ((4 == (scanf("%d.%d %d:%d", &d.days, &d.month, &d.hours, &d.mins))) &&
      checkDate(d.month, d.days) && checkTime(d.hours, d.mins)) {
    *str = d;
    return 1;
  } else
    return 0;
}

int travelTimeInput(struct date *str) {

  struct date d;

  puts("Введите время движения поезда в формате DD HH:MI");
  if ((3 == (scanf("%d %d:%d", &d.days, &d.hours, &d.mins))) &&
      checkTime(d.hours, d.mins) && d.days > 0) {
    d.month = 0;
    *str = d;
    return 1;
  } else
    return 0;
}

void dateCalcUI() {

  struct date startTime, travelTime, finishTime;
  if (startTimeInput(&startTime) && travelTimeInput(&travelTime)) {
    finishTime = sumDates(startTime, travelTime);
    printf("Поезд приедет %d.%d %d:%d\n", finishTime.days, finishTime.month,
           finishTime.hours, finishTime.mins);
  } else
    printf("Неверный формат введеных данных\n");
}
