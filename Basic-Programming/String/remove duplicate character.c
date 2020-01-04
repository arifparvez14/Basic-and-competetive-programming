#include<stdio.h>

void removeDuplicates(char  str);
int main()
{
    char str[200];
    gets(str);

    printf("String before removing duplicates: %s\n", str);
    removeDuplicates(str);
    printf("String after removing duplicates: %s\n", str);
    return 0;

}
