//
// Created by 费爱跃 on 2023/12/27.
//
#include <stdio.h>

int main(void) {
    // PI is Constant
    const double PI = 3.14159;
    int radius = 10;

    // magic number
    double circumference = 2 * PI * radius;
    double area = PI * radius * radius;
    double surface = 4 * PI * radius * radius;
    double volume = (double) 4 /3 * PI * radius * radius * radius;


    // %d : decimal Integer 十进制的整数
    // .2 : precision
    printf("radius = %d\ncircumference = %.2f\narea = %.2f",
           radius, circumference, area);
    return 0;
}