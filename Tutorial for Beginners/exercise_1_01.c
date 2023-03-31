
#include <stdio.h>

/*copy content  on get and put*/

main()
{
 int c;
 while ((c = getchar()) != EOF)
    putchar(c);


}


/*copy input to output 1st version
main()
{
    int c;

    c= getchar();
    while(c != EOF)
    {
        putchar(c);
        c= getchar();
    }

}
*/
