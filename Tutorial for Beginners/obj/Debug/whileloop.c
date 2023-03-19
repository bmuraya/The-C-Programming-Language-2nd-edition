// c program  print alphabet   in uppercase  A TO Z  

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

#include <stdio.h>

void main ()
{
    char ch= 'A', zh= 'Z'

    while (ch<=zh)
    {
        printf("%c" ch);
        ch++;
    }
    
    printf("Erro message or end of program");
    getchar();

}