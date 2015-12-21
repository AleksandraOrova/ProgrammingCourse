
#include<stdio.h>
#include<stdlib.h>
#include"strings_console_ui.h"
#include"strings.h"
#define N 255

void strings_console_UI(){
    int rows = 5;
    char** text = (char**) malloc(rows*sizeof(char*));
    int i;
    for (i = 0; i<rows; i++)
        text[i] = (char*) malloc(N*sizeof(char));
    input_text(text, rows, N);
    printf("\n");
    print_text(text, rows);
    spread_text(text, rows);
    print_text(text, rows);

    for (i = 0; i<rows; i++)
        free(text[i]);
    free (text);
}
