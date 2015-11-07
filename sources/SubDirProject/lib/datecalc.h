#ifndef DATE_CALC
#define DATE_CALC

#ifdef __cplusplus
extern "C" {
#endif
extern const int months [12];
struct date{
    int month;
    int days;
    int hours;
    int mins;
};
int dateCompare(struct date date, struct date cdate);
int getMonthAndDays(int* month, int* days);
struct date getDate(struct date date, int days, int hours, int mins);
void dateCalc();
#endif // DATE_CALC

#ifdef __cplusplus
}
#endif
