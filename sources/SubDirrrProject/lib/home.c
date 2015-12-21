#include <home.h>

int home(Size home1, Size home2, Size area  )
{
    if(((home1.width + home2.width <= area.width) &&
        (home1.height <= area.height) &&
        (home2.height <= area.height)) ||
        ((home1.height + home2.width <= area.width) &&
        (home1.width <= area.height) &&
        (home2.height <= area.height)) ||
        ((home1.width + home2.height <= area.width) &&
        (home1.height <= area.height) &&
        (home2.width <= area.height)) ||
        ((home1.height + home2.height <= area.width) &&
        (home1.width <= area.height) &&
        (home2.width <= area.height)))
        return 1;
    int temp = area.width;
    area.width = area.height;
    area.height = temp;
    if(((home1.width + home2.width <= area.width) &&
        (home1.height <= area.height) &&
        (home2.height <= area.height)) ||
        ((home1.height + home2.width <= area.width) &&
        (home1.width <= area.height) &&
        (home2.height <= area.height)) ||
        ((home1.width + home2.height <= area.width ) &&
        (home1.height <= area.height) &&
        (home2.width <= area.height)) ||
        ((home1.height + home2.height <= area.width) &&
        (home1.width <= area.height) &&
        (home2.width <= area.height)))
        return 1;
    return 0;
}
