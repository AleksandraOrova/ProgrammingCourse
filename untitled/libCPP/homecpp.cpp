#include "homecpp.h"

HomeCPP::HomeCPP(int length_horizontal_a, int length_vertical_a, int length_horizontal_h1, int length_vertical_h1, int length_horizontal_h2, int length_vertical_h2)
{
    this->length_horizontal_a  = length_horizontal_a;
    this->length_vertical_a    = length_vertical_a;
    this->length_horizontal_h1 = length_horizontal_h1;
    this->length_vertical_h1   = length_vertical_h1;
    this->length_horizontal_h2 = length_horizontal_h2;
    this->length_vertical_h2   = length_vertical_h2;
}

int HomeCPP::doWork()
{
    if(((length_horizontal_h1 + length_horizontal_h2 <= length_horizontal_a) &&
        (length_vertical_h1 <= length_vertical_a) &&
        (length_vertical_h2 <= length_vertical_a)) ||
        ((length_vertical_h1 + length_horizontal_h2 <= length_horizontal_a) &&
        (length_horizontal_h1 <= length_vertical_a) &&
        (length_vertical_h2 <= length_vertical_a)) ||
        ((length_horizontal_h1 + length_vertical_h2 <= length_horizontal_a) &&
        (length_vertical_h1 <= length_vertical_a) &&
        (length_horizontal_h2 <= length_vertical_a)) ||
        ((length_vertical_h1 + length_vertical_h2 <= length_horizontal_a) &&
        (length_horizontal_h1 <= length_vertical_a) &&
        (length_horizontal_h2 <= length_vertical_a)))
        return 1;
    int temp = length_horizontal_a;
    length_horizontal_a = length_vertical_a;
    length_vertical_a = temp;
    if(((length_horizontal_h1 + length_horizontal_h2 <= length_horizontal_a) &&
        (length_vertical_h1 <= length_vertical_a) &&
        (length_vertical_h2 <= length_vertical_a)) ||
        ((length_vertical_h1 + length_horizontal_h2 <= length_horizontal_a) &&
        (length_horizontal_h1 <= length_vertical_a) &&
        (length_vertical_h2 <= length_vertical_a)) ||
        ((length_horizontal_h1 + length_vertical_h2 <= length_horizontal_a ) &&
        (length_vertical_h1 <= length_vertical_a) &&
        (length_horizontal_h2 <= length_vertical_a)) ||
        ((length_vertical_h1 + length_vertical_h2 <= length_horizontal_a) &&
        (length_horizontal_h1 <= length_vertical_a) &&
        (length_horizontal_h2 <= length_vertical_a)))
        return 1;
    return 0;
}
