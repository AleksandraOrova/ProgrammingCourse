#include "strings.h"
#include<stdio.h>
#include<stdlib.h>

char** initialize_text(int rows, int max){
    char** text;
    text = (char**) malloc(rows*sizeof(char*));
    int i;
    for (i = 0; i<rows; i++)
        text[i] = initialize_string(max);
    return text;
}

char* initialize_string(int max){
    return (char*) malloc(max*sizeof(char));
}

void input_text(char** text, int rows, int max){
    int i;
    getchar();//считываем предыдущий enter
    for (i = 0; i<rows; i++)
        get_string(text[i], max);
}

void print_text(char** text, int rows){
    int i;
    for (i = 0; i<rows; i++)
        printf("%s\n", text[i]);
}

int get_length(char* string){
    int len = 0;
    while(*string++!=0) len++;
    return len;
}

int count_spaces(char* string){
    int count = 0;
    while(*string++!=0) count+=(*string==' '?1:0);
    return count;
}

int count_chars(char* string, char chr){
    int count = 0;
    while(*string++!=0) count+=(*string==chr?1:0);
    return count;
}

int get_max_string_length(char** text, int rows){
    int max = get_length(text[0]), i;
    for(i = 1; i<rows; i++)
        max = (get_length(text[i])>max?get_length(text[i]):max);
    return max;
}

char* insert_char(char* str, int place, char chr){
    int i;
    char* result = initialize_string(get_length(str)+1);
    for(i = 0; i<place; i++)
        result[i] = str[i];
    result[place] = chr;
    for(i = place; i<get_length(str); i++)
        result[i+1] = str[i];
    result[get_length(str)+1] = 0;
    return result;
}

char* insert_chars(char* str, int place, char chr, int count){
    int i;
    for(i = 0; i<count; i++)
        str = insert_char(str,place,chr);
    return str;
}

void get_string(char *str, int max){
    int i = 0, ch;
    while((ch = getchar()) != '\n')
        if(str != NULL && i < max - 1)
            str[i++] = ch;
    if(str != NULL && i < max)
        str[i] = 0;
}

//функция, возвращающее индекс num-ового вхождения символа chr в строку str
int get_char_index(char* str, char chr, int num){
    int i, temp = 0;
    if(num>count_chars(str, chr))
        return -1;
    for(i = 0; i<get_length(str); i++)
        if(str[i]==chr)
            if(++temp == num)
                return i;
    return i;

}

void spread_text(char** text, int rows){
    int maxLength = get_max_string_length(text, rows);
    int i;
    for(i = 0; i<rows; i++)
        if(get_length(text[i]) < maxLength){
            int spaces = count_spaces(text[i]);
            if (spaces==0)
            {
                int j, count = maxLength-get_length(text[i]);
                text[i]=insert_chars(text[i],0,' ',count);
            }
            else
            {
                int count = maxLength - get_length(text[i]);
                int j, k;
                for(j = spaces; j>0; j--){
                    printf("%d\t%d - %d = %d\n", spaces, maxLength, get_length(text[i]), count);
                    text[i] = insert_chars(text[i],get_char_index(text[i],' ',j),' ', count/spaces+(j>(spaces-count%spaces)?1:0));
                }
            }
        }
    printf("\n");
}
