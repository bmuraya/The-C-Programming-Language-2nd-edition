// for statement  on temperatur converter

/* print Fahrenheit -Celsius Table */

#include <stdio.h>

/*int main()
{
    int i, j, sum;
    printf("Enter a Number \n");
    scanf("%d",&j);

    for(i=1; i<=10; i++)
{
    sum = j*i;
    printf("%d*%d=%d\n" ,j,i,sum);


}

getchar();
}*/
void main ()
{
    char ch= 'A', zh= 'Z';

    while(ch<=zh)
    {
        printf("%c \'", ch);
        ch++;
    }

    //printf("Error message or end of program");
    getch();

}
