
 #include <stdio.h>

/*copy content  on get and put

 void main ()
 {
     char ch[35];
     printf("enter charcter \n ");
     gets(ch);
      printf("your is charcter \n ");
      puts(ch);

      return(0);

}*/


/*copy input to output 1st version
main()
{
 int c;

 c= getchar();
 while (c ! =EOF){

    putchar(c);
    c= getchar();
 }

}
*/




main()
{
 int c;
 while ((c = getchar()) != EOF)
    putchar(c);


}


