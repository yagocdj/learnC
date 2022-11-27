// Exemplo do livro "C - A linguagem de programação padrão ANSI"
#include <stdio.h>

/* imprime a tabela de conversão Fahrenheit-Celsius
 * para fahr = 0, 20, ..., 300 */

int main() {

    float fahr, celsius;
    int inicio, fim, incr;

    inicio = 0; /* limite inferior da tabela */
    fim = 300; /* limite superior */
    incr = 20; /* incremento */

    fahr = inicio;
    while (fahr <= fim) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + incr;
    }

    return 0;
}
