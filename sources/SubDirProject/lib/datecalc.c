
#include <stdio.h>
#include"dateCalc.h"

/// Месяцы??? и че?
/// может быть, это количество дней по месяцам?
const int months [] = {31,28,31,30,31,30,31,31,30,31,30,31};


/// Название функции ни о чем не говорит
/// В файле с ui я писала, что можно было бы использовать тот же тип данных структуру date для хранения времени в пути
struct date getDate(struct date date, int days, int hours, int mins){
    date.mins=date.mins+mins;
    date.hours=date.hours+hours+date.mins/60;
    date.mins%=60;
    date.days=date.days+days+date.hours/24;
    date.hours%=24;
    while (date.days > months[date.month-1]){
        date.days -= months[date.month-1];
        date.month = (date.month%12)+1;
    }
    return date;

}

/// Если эта функция нужна только для тестов, разумно перенести ее в проект с тестами
int dateCompare(struct date date, struct date cdate){
    if ((date.days == cdate.days) &&
            (date.hours == cdate.hours) &&
            (date.mins == cdate.mins) &&
            (date.month == cdate.month))
        return 1;
    else return 0;
}


