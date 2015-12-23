#ifndef STRINGS_H
#define STRINGS_H

#ifdef __cplusplus
extern "C"{
#endif

int get_max_string_length(char**, int);
int count_spaces(char*);
char* insert_char(char*, int, char);
char* insert_chars(char*, int, char, int);
void spread_text(char**, int);
int get_char_index(char*, char, int);
int count_chars(char*, char);


#ifdef __cplusplus
}
#endif
#endif // STRINGS_H
