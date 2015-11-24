#include <stdio.h>
#include"bank_console_ui.h"
#include"home_console_ui.h"
#include"cm_to_inch_console_ui.h"
#include"matrix_console_ui.h"

#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
    if(argc!=0){
        for(i = 0; i<argc; i++)
            printf("%s", *argv[i]);
    }
    printf("Hello World!\n");
    return 0;
}

