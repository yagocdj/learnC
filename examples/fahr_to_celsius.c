#include <stdio.h>

int main() {
    /*Prints the conversion table Fahrenheit-Celsius
     to fahr = 0, 20, ..., 300*/
    int fahr, celsius;
    int start, end, increment;

    start = 0;      /* lower table limit */
    end = 300;      /* upper table limit */
    increment = 20;  /* increment */ 
    fahr = start;
   
    while (fahr <= end) {
        celsius = 5 * (fahr - 32)/9;
        printf("%d\t%d\n", fahr, celsius);
        fahr += increment;
    }
    return 0;
}
