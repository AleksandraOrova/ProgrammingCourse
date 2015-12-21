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
    stringsWorker.spread_text(text, rows);
    stringsWorker.print_text(text, rows);
}
