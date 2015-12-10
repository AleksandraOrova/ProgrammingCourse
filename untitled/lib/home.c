int home(int length_horizontal_a, int length_vertical_a, int length_horizontal_h1, int length_vertical_h1, int length_horizontal_h2, int length_vertical_h2)
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

