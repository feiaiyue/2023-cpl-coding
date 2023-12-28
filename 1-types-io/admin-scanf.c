//
// Created by 费爱跃 on 2023/12/28.
//
#include <stdio.h>
#include <math.h>
#include <ctype.h>
int main(void) {

    /*
     * a string is typically represented as a character array,
     * and the array's end is marked by a special character \0 (null terminator) to
     * indicate the end of the string.
     */
    char first_name[10];
    char last_name[10];

    char gender;

    int birth_year;
    int birth_month;
    int birth_day;

    char weekday[] = "Tuesday";

    int c_score = 30;
    int music_score = 100;
    int medicine_score = 85;

    double mean = (c_score + music_score + medicine_score) / 3.0;
    double sd = sqrt((pow(c_score - mean, 2) +
        pow(music_score - mean, 2) +
        pow(medicine_score - mean, 2) / 3.0));
    int rank;

    // %c will not ignore whitespace
    // %s%s%c : format specifier
    // The array itself represents the address, no need to assign the address separately
    // the & operator is used to obtain the address of the character variable.

    // whitespace is very important includes tab \space \enter
    // %d %s will ignore whiteSpace
    // need to be used carefully
    scanf("%9s%9s %c %d%d%d %s %d%d%d %lf%lf",
          first_name, last_name, &gender,
          &birth_year, &birth_month, &birth_day, weekday,
          &c_score, &music_score, &medicine_score,
          &mean, &sd, &rank);


    printf("%s \t %s \t %c \n"
           "%.2d-%d-%d \t %.3s.\n"
           "%d \t %d \t %d\n"
           "%.1f \t %.2f\n"
           "%d%%",
           first_name, last_name, toupper(gender),
           birth_month, birth_day, birth_year, weekday,
           c_score, music_score, medicine_score,
           mean, sd,
           rank);
    return 0;
}