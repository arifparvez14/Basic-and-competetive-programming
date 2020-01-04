#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum size of string

int main()
{
    char text1[MAX_SIZE], text2[MAX_SIZE];

    /* Input original string from user */
    printf("Enter any string: ");
    gets(text1);

    /* Copy text1 to text2 using strcpy() */
    strcpy(text2, text1);

    printf("First string = %s\n", text1);
    printf("Second string = %s\n", text2);

    return 0;
}
