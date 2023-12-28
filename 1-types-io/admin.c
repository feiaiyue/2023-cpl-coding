#include <math.h>
#include <stdio.h>
#include <ctype.h>

//
// Created by 费爱跃 on 2023/12/27.
//
int main(void) {
    // m -> M char represent Integer
    char first_name[] = "Dayou";
    char last_name[] = "Luo";

    char gender = 'm';
    char upper_case_gender = gender - ('a' - 'A');
    printf("%c\n",upper_case_gender);

    int birth_year = 1954;
    int birth_month = 7;
    int birth_day = 20;

    char weekday[] = "Tuesday";

    int c_score = 30;
    int music_score = 100;
    int medicine_score = 85;

    double mean = (c_score + music_score + medicine_score) / 3.0;
    double sd = sqrt((pow(c_score - mean, 2) +
        pow(music_score - mean, 2) +
        pow(medicine_score - mean, 2) / 3.0));
    int rank = 5;


    // .2s : precision although .2 represent the precision, the meaning are different
    // .2d : precision the least bit will output if not enough, 补0
    // .2f 小数点后保留多少位
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