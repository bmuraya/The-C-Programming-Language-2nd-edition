#include <stdio.h>
#include <string.h>

 /* charater count with a while loop and a for loop

int main()
{
    char str[100];
    int i,totChar;
totChar=0;
    printf("Please enter the string for count characters\n");
    gets(str);//store the string
//count characters of a string wit out space
i=0;
    while(str[i] != '\0'){
        if(str[i]!=' ')// this condition is used to avoid counting space
        {
            totChar++;
        }
         i++;
    }
    printf("The total characters of the given string= %d",totChar);
    getch();
    return 0;
}
*/



int main()
{
    char string[100];
    int count = 0;
    printf("Please enter the string for count characters\n");
    gets(string);//store the string

    //Counts each character except space
    for(int i = 0; i < strlen(string); i++) {
        if(string[i] != ' ')
            count++;
    }

    //Displays the total number of characters present in the given string
    printf("Total number of characters in a string: %d", count);

    return 0;
}


/* count the number of words 
#include <stdio.h>

int main() {
   char str[100];
   int i, wordCount;

   printf("Enter a string: ");
   gets(str);

   // count the number of words
   wordCount = 0;
   for(i = 0; str[i] != '\0'; i++) {
      if(str[i] == ' ' || str[i] == '\n') {
         wordCount++;
      }
   }
printf("The number of words in the string is: %d", wordCount);

   return 0;
}
*/

/*count number line in input 

#include <stdio.h>

int main() {
   int c;
   int lineCount = 0;

   printf("Enter some text: \n");

   // count the number of lines
   for(; (c = getchar()) != EOF; ) {
      if(c == '\n') {
         lineCount++;
      }
   }

   printf("The number of lines is: %d", lineCount);

   return 0;
}
 */