/*This is a program written in the C programming language. It begins by including the standard input-output library "stdio.h".

The program then defines a function "main" which is the entry point of the program. The function "main" initializes two character arrays "str" and "strl" with a size of 100 characters each.

The program then prints a message "Enter an input: " on the console using the "printf" function.

The "gets" function is then used to read a string of characters from the console and store it in the array "str".

After that, the program initializes two integer variables "i" and "k" to 0. The program then enters into a loop that continues until the end of the string is reached, which is indicated by the null character '\0'.

Within the loop, the program checks if the current character is not a space character ' '. If the current character is not a space, it is copied to the "strl" array at index "k" and then the value of "k" is decremented.

After processing all characters in the "str" array, the program inserts a null character '\0' at the end of the "strl" array.

Finally, the "puts" function is used to print the modified string "strl" on the console.

The purpose of this program is to remove all the spaces from the input string "str" and then print the modified string "strl*/

#include <stdio.h>

int main ()
{
    char str[100], strl[100];
    printf("Enter an input: ");
    gets(str);
    int  i=0, k=0;
    while(str[i] != '\0')
    {
        if(str[i]!= ' ')

        {
            strl[k]=str[i];
            k++;
        }
        i++;
    }
    strl[k]='\0';
    puts(strl);
    return 0;
}
