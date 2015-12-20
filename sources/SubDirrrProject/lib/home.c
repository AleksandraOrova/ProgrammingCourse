
int home(int length_horizontal_a, int length_vertical_a, int length_horizontal_h1, int length_vertical_h1, int length_horizontal_h2, int length_vertical_h2)
{
/// вот это то, что точно никто читать не станет...
/// одна боль...
/// Начните хотя бы с названий, и с того, чтобы объединить параметры прямоугольников, которые вы сравниваете в структуры
/// попробуйте выделить какие-то логические куски
/// тут есть дублирования условий, введите какие-нибудь временные переменные с говорящими именами

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
