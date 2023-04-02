#include <stdio.h>

int main()
{

int  num1, num2;
float f3, f4;

//Get Input 

scanf("%d %d",&num1, &num2);
scanf("%f %f", &f3, &f4);

/*int sum  =   num1 + num2;
float diff = num1 - num2;

int flo  = f3 + f4;
float floj = f3 - f4;*/

printf("%d %d\n",  num1 + num2, num1 - num2);
printf("%.1f %.1f\n", f3 + f4, f3 - f4);

    return 0;
}