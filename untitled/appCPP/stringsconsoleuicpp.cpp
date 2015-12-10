#include "stringsconsoleuicpp.h"
#include"stringscpp.h"
#define N 255

StringsConsoleUICPP::StringsConsoleUICPP()
{

}

void StringsConsoleUICPP::doWork(){
    int rows = 5;
    StringsCPP stringsWorker;
    char** text = stringsWorker.initialize_text(rows, N);
    stringsWorker.input_text(text, rows, N);
    stringsWorker.print_text(text, rows);
    //printf("\nmaxLength = %d\t%d\n", get_max_string_length(text, rows), count_spaces(text[0]));
    //text[0] = insert_char(text[0], 2, ' ');
    //printf("%s\n", text[0]);
    stringsWorker.spread_text(text, rows);
    stringsWorker.print_text(text, rows);
}
