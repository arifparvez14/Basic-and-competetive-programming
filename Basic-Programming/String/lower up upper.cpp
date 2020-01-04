#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char s[100];
    int i,len;
    gets(s);
    for(i=0; i<strlen(s); i++)
    {
        if(s[i]>='a' && s[i]<='z')
            s[i]=s[i]-32;
    }
    puts(s);
    //printf("\n");

    for(i=0; i<strlen(s); i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            s[i]=s[i]+32;
    }

    puts(s);
    return 0;
}
