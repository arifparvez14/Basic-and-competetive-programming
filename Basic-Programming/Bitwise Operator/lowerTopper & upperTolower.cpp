#include<bits/stdc++.h>
using namespace std;

char to_upper(char ch)
{
    return ch & 95;
}
char to_lower(char ch)
{
    return ch | 32;
}

int main()
{
    char *str = "AbCdEfGhIjKlMnOpQrStUvWxYz";
    for(int i=0;i<26;i++)
    {
        printf("UpperCase :%c, ",to_upper(str[i]));
        printf("LowerCase :%c\n",to_lower(str[i]));
    }
    return 0;
}



