// Documentation section
// single line comments
/*  Authors  babu muraya
    Date 12/03/2023
    hello world progam print
**/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

int  num1, num2, sum, diff;
float num3, num4,sum, diff;

scanf	("%d\t %d\n",&num1, &num2);
scanf	("%f\t %f\n", &num3, &num4);

sum  = num1 + num2 ;
diff =num1 + num2;


sum  = num3 + num4 ;
diff =num3 + num2;

printf("%d\t  %d\n", sum , diff);
printf("%.1f\t %.1f\n",sum , diff);
    return 0;
}

//sub program section Optional
