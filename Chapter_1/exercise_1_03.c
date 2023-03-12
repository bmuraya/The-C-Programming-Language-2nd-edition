#include <stdio.h>
#include <stdlib.h>

/*variables (container where we can store different pice of informatin
 number text ) and arithmetic */

// Data types
// intger  are  whole number  (age  = 35;   printf  %d)
// string of charcater   characterName[] = "the character"; printf  %s
// float/double    number with decimal  grade =3.2; printf %f
// character  points ='A'  %c

// arithmetic
// = assign to or equal to
// +
// -
// %
// /
// *
// ==
// ++  or + 1 increment
// --  or - 1 decrement


/*/ The formula to convert °f to °c is c = 5/9 × (f – 32).
convert 50°c to °f. Celsius and Fahrenheit are the two important
 units to measure temperature. Fahrenheit is more frequently
 used in measuring body temperatures or temperature of liquids,
  whereas celsius is used to measure the climate  also Celsius
  to Fahrenheit is given by: °F = °C × (9/5) + 32. */

/* print  Fahrenheit -celsius table for fahr = 0, 20 ..... , 300 */

main(void)
{
    float fahr, celsius;
     // int  fahr, celsius;
    int lower, upper, step;

    lower = 0; // lower limit of temperature table
    upper = 300; //upper limit
    step = 20; // step size

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr-32.0);
        //printf("%d\t %d\n", fahr, celsius);
        printf("%3.0f  %6.1f\n", fahr, celsius);  //  integer division truncates any fractional part is discarded as o
        fahr = fahr + step;

    }

}
