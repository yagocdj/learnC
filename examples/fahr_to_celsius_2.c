#include <stdio.h>

int main() {
    /*Prints the conversion table Fahrenheit-Celsius
     to fahr = 0, 20, ..., 300; floating point version*/
    float fahr, celsius;
    int start, end, increment;

    start = 0;      /* lower table limit */
    end = 300;      /* upper table limit */
    increment = 20;  /* increment */ 
    fahr = start;
   
    while (fahr <= end) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr += increment;
    }
    return 0;
}
