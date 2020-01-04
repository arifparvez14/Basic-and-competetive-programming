#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    char prevChar;
    int i, words;

    getline(cin,str);
    i = 0;
    words = 0;
    prevChar = '\0';

    while(1)
    {
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t' || str[i]=='\0')
        {
            /**
             * It is a word if current character is whitespace and
             * previous character is non-white space.
             */
            if(prevChar != ' ' && prevChar != '\n' && prevChar != '\t' && prevChar != '\0')
            {
                words++;
            }
        }
        /* Make the current character as previous character */
        prevChar = str[i];
        if(str[i] == '\0')
             break;
        else
             i++;
    }
    cout<<words;
    return 0;

}
