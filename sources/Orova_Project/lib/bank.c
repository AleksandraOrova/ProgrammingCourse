#include"bank.h"

/// Имена параметров a,b никак не намекают на их предназначение
/// и Bank тоже слишком абстрактно
int Bank(int a, int b)
{
    /// Rez???? result?
    int Rez;
    Rez = a*(1 + (b / 100)) ^ 5;
    if (Rez > 0)
        printf("After 5 years You will have %d rubbles.\n\n", Rez);
    else
        printf("Error.");
    return Rez;
}
