#include<stdio.h>
#include<stdlib.h>
#include"strings.h"
#include<string.h>

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
    unsigned int max = strlen(text[0]);
    int i;
    for(i = 1; i<rows; i++)
        max = (strlen(text[i])>max?strlen(text[i]):max);
    return max;
}

char* insert_char(char* str, int place, char chr){
    int i;
    char* result = (char*) malloc((strlen(str)+1)*sizeof(char));
    for(i = 0; i<place; i++)
        result[i] = str[i];
    result[place] = chr;
    for(i = place; i<strlen(str); i++)
        result[i+1] = str[i];
    result[strlen(str)+1] = 0;
    return result;
}

char* insert_chars(char* str, int place, char chr, int count){
    int i;
    for(i = 0; i<count; i++){
        char *tmp = str;
        str = insert_char(str,place,chr);
        free(tmp);
    }
    return str;
}


//функция, возвращающее индекс num-ового вхождения символа chr в строку str
int get_char_index(char* str, char chr, int num){
    int i, temp = 0;
    if(num>count_chars(str, chr))
        return -1;
    for(i = 0; i<strlen(str); i++)
        if(str[i]==chr)
            if(++temp == num)
                return i;
    return i;

}

void spread_text(char** text, int rows){
    int maxLength = get_max_string_length(text, rows);
    int i;
    char* tmp;
    for(i = 0; i<rows; i++)
        if(strlen(text[i]) < maxLength){
            int spaces = count_spaces(text[i]);
            if (spaces==0)
            {
                int count = maxLength-strlen(text[i]);
                tmp = text[i];
                text[i]=insert_chars(text[i],0,' ',count);
                free(tmp);
            }
            else
            {
                int count = maxLength - strlen(text[i]);
                int j;
                for(j = spaces; j>0; j--){
                    //printf("%d\t\t%d\t%d - %d = %d\n", i, spaces, maxLength, get_length(text[i]), count);
                    text[i] = insert_chars(text[i],get_char_index(text[i],' ',j),' ', count/spaces+(j>(spaces-count%spaces)?1:0));
                }
            }
        }
    printf("\n");
}
