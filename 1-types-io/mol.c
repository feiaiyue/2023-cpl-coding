//
// Created by 费爱跃 on 2023/12/27.
//

#include <stdio.h>
int main(void) {
    const double MOL = 6.02E23;
    const int GRAM_PER_MOL = 32;

    int mass = 6;

    double quantity = (double)mass / GRAM_PER_MOL * MOL;

    // e : exponent
    // g : significant digits
    printf("quantity = %.3e\nquantity = %.5g\n",
           quantity, quantity);
    return 0;
}