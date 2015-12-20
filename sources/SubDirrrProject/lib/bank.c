#include"bank.h"

/// Да почему же float, а не double, float на несколько байтом меньше double, но на порядки менее точный
///
/// И вы уже знаете, что эта функция просто делает рассчет сложного процента,
/// так и назовите ее
float bank(float summa, float percent)
{
    float result = summa;
    int i;
    for (i = 0; i < 5; i++)
        result *= (100 + percent) / 100;
    return result;
}
