#include <stdio.h>
/*count blank, tabs and newlines */

main()

{
    char c;
    int tabs_nc =0;
    int newlines_nl =0;
    int blank_nc = 0;

    while ((c = getchar())!= EOF)
    {
        if(c == ' ')
        {
            ++blank_nc;
        }
        else if (c== '\t')
        {
            ++tabs_nc;
        }

        else if (c== '\n')
        {
            ++newlines_nl;
        }
    }
    printf("%d \n %d \n %d \n", blank_nc, tabs_nc, newlines_nl);

    return(0);
}
