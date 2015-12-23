#include<stdio.h>
#include<stdlib.h>
#include "stringscpp.h"

string StringsCPP::insert_spaces(string str, int place, int count){
    string result, tmp = "";
    result.append(str);
    for (int i = 0; i<count; i++)
        tmp.append(" ");
    result.insert(place, tmp);
    return result;
}
int StringsCPP::count_spaces(string str){
    int count = 0;
    for (int i = 0; i<str.length(); i++)
        if (str[i] == ' ')
            count++;
    return count;
}
int StringsCPP::get_max_string_length(string* text, int lines){
    int max = text[0].length();
    for(int i = 1; i<lines; i++)
        max = (text[i].length()>max?text[i].length():max);
    return max;
}
void StringsCPP::spread_text(string* text, int lines){
    int maxLength = get_max_string_length(text, lines);
    int i;
    for(i = 0; i<lines; i++)
        if(text[i].length()< maxLength){
            int spaces = count_spaces(text[i]);
            if (spaces==0)
            {
                int count = maxLength - text[i].length();
                text[i] = insert_spaces(text[i], 0 , count);
            }
            else
            {
                int lastSpace = text[i].find_last_of(' ');
                int j = spaces;
                int count = maxLength - text[i].length();
                while(lastSpace != -1 && j != 0){
                    text[i] = insert_spaces(text[i], lastSpace, count/spaces+(j>(spaces-count%spaces)?1:0));
                    j--;
                    lastSpace = text[i].find_last_of(' ', lastSpace-1);
                }
            }
        }
}


