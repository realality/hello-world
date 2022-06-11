#include <stdio.h>
#include <ctype.h>

void main()
{
    char alphabet;
    printf("enter any alphabet \n");

    alphabet = getchar();

    if(islower(alphabet))

       putchar(toupper(alphabet));

    else

       putchar(tolower(alphabet));

    return 0;


}