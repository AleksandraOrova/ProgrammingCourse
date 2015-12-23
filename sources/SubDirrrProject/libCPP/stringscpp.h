#include <string.h>
#ifndef STRINGSCPP_H
#define STRINGSCPP_H
#include <string>

/// где консты?
using namespace std;
class StringsCPP
{
private:
    static int get_max_string_length(string* text, int lines);
    static string insert_spaces(string str, int place, int count);
    static int count_spaces(string str);
public:
    static void spread_text(string* text, int lines);
};

#endif // STRINGSCPP_H

