#ifndef HOME_H
#define HOME_H

typedef struct{
    double width;
    double height;
}Size;

#ifdef __cplusplus
extern "C"{
#endif

    int home(Size, Size, Size);

#ifdef __cplusplus
}
#endif

#endif // HOME_H
