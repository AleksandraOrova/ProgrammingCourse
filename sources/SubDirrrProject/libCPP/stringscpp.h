#ifndef STRINGSCPP_H
#define STRINGSCPP_H

/// разбираться не будем, но похоже, можно все методы сделать static
/// Производит впечатление бредового класса
class StringsCPP
{
public:

    StringsCPP();
    /// Следует использовать строки из C++
    void get_string(char*, int);
    char** initialize_text(int, int);
    char* initialize_string(int);
    void input_text(char**, int, int);
    void print_text(char**, int);
    int get_length(char*);
    int get_max_string_length(char**, int);
    int count_spaces(char*);
    char* insert_char(char*, int, char);
    char* insert_chars(char*, int, char, int);
    void spread_text(char**, int);
    int get_char_index(char*, char, int);
    int count_chars(char*, char);
};

#endif // STRINGSCPP_H

