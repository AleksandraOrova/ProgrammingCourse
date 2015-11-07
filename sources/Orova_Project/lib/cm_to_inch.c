#include <cm_to_inch.h>

int Cm_to_Inch(int L)
{
    int i;
    for (i = 1; i <= L; i++)
        printf("%d \t %f \n", i, 2.54f * i);
    return 0;
}
