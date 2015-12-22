#ifndef STRINGSCPP_H
#define STRINGSCPP_H

class StringsCPP
{
public:

    StringsCPP();
    static void get_string(char*, int);
    static char** initialize_text(int, int);
    static char* initialize_string(int);
    static void input_text(char**, int, int);
    static void print_text(char**, int);
    static int get_length(char*);
    static int get_max_string_length(char**, int);
    static int count_spaces(char*);
    static char* insert_char(char*, int, char);
    static char* insert_chars(char*, int, char, int);
    static void spread_text(char**, int);
    static int get_char_index(char*, char, int);
    static int count_chars(char*, char);
};

#endif // STRINGSCPP_H

