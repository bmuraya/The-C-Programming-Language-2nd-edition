
/* execise  1-4   print program corresponding Celsius to Fahrentheit
/*The formula to convert °f to °c is c = 5/9 × (f – 32).
convert 50°c to °f. Celsius and Fahrenheit are the two important
 units to measure temperature. Fahrenheit is more frequently
 used in measuring body temperatures or temperature of liquids,
  whereas celsius is used to measure the climate  also Celsius
  to Fahrenheit is given by: °F = °C × (9/5) + 32. */


// Print Celsius-Fahrenheit table
// for celsius = 0, 20, ... 300
// floating point version


#include <stdio.h>

void main()
{
  float celsius, fahr;
  int lower = 0, upper = 300, step =20;

    printf("Celsius\t | Fahrenheit\n");
    printf("--------------------\n");
    celsius = lower ;

    while(celsius <= upper)
{
   // fahr = (9.0/5.0) * ( celsius+ 32.0);
    fahr = (celsius * 9.0/ 5.0) + 32.0f; // formula °F = °C × (9/5) + 32

    printf("%3.0f\t %6.1f\n", celsius, fahr);
    celsius= celsius + step;
}



}
