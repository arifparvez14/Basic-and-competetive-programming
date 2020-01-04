#include<stdio.h>
#include<string.h>

int main()
{
    char str[200];
    int i,freq[26];

    gets(str);
    for(i=0;i<26;i++)
    {
        freq[i]=0;
    }
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            freq[str[i]-97]++;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            freq[str[i]-65]++;
        }
    }
    for(i=0;i<26;i++)
    {
        if(freq[i] !=0)
        {
            printf("%c = %d\n",(i+97),freq[i]);
        }
    }
    return 0;
}
