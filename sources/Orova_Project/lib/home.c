#include"home.h"

int Home(int a, int b, int p, int q, int r, int s)
{
    if ((a * b) < (p * q + r * s))
        printf("\n Put 2 houses in this area is POSSIBLE\n\n");
    else
        printf("\n It's IMPOSIBLE! Change linear dimensions of Your houses!\n\n");
}

