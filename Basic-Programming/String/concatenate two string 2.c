#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    gets(s1);
    gets(s2);

    strcat(s1,s2);
    printf("Concatanated String is: %s",s1);

    return 0;
}

