#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"strings_console_ui.h"
#include"strings.h"
#define N 255

void strings_console_UI(){
    int rows = 5;
    char** text = initialize_text(rows, N);
    input_text(text, rows, N);
    //print_text(text, rows);
    //printf("\nmaxLength = %d\t%d\n", get_max_string_length(text, rows), count_spaces(text[0]));
    //text[0] = insert_char(text[0], 2, ' ');
    //printf("%s\n", text[0]);
    spread_text(text, rows);
    print_text(text, rows);
}
