/* Celsius to Fahrenheit*/

#include <stdio.h>

int main(void){
    float fahr, celsius;
    int lower, upper, step;

    lower = -50;
    upper = 150;
    step = 10;

    celsius = lower;
    printf("Celsius\t\tFahrenheit\n\n");
    while(celsius <= upper){
        //celsius = (5.0 / 9.0) * (fahr - 32.0);
        fahr = (9.0 / 5.0) * celsius + 32.0;
        printf("%3.0f\t\t%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    return 0;
}
