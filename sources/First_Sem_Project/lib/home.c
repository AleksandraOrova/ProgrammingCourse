int home(int a, int b, int p, int q, int r, int s)
{
    if(((p+r<=a)&&(q<=b)&&(s<=b))||((q+r<=a)&&(p<=b)&&(s<=b))||((p+s<=a)&&(q<=b)&&(r<=b))||((q+s<=a)&&(p<=b)&&(r<=b)))
        return 1;
    int temp = a;
    a = b;
    b = temp;
    if(((p+r<=a)&&(q<=b)&&(s<=b))||((q+r<=a)&&(p<=b)&&(s<=b))||((p+s<=a)&&(q<=b)&&(r<=b))||((q+s<=a)&&(p<=b)&&(r<=b)))
        return 1;
    return 0;
}
