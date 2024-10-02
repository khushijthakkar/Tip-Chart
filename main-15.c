/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include "main.h"


void printTipChart(int min_price, int max_price) {
    for (int price = min_price; price <= max_price; price++) {
        double tip = price * TIP_RATE;
        printf("On a meal of $%d, the suggested tip amount $%.2f\n", price, tip);
    }
}

int main() {
    int min_price, max_price; //variables given by user
    int valid_charts = 0; //chart count

    while (1) {
        printf("Enter the minimum and maximum meal values: ");
        scanf("%d %d", &min_price, &max_price);

        
        if (min_price < 0 || max_price < 0) {
            break;
        }

        
        if (min_price <= max_price) {
            printTipChart(min_price, max_price);
            valid_charts++;
        }
    
    }

    printf("You have printed total %d valid charts\n", valid_charts);
    return 0;
}