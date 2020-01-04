#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100],word[100];
    int i,j,found,strLen,wordLen,count=0;
    gets(str);
    gets(word);

    strLen=strlen(str);
    wordLen=strlen(word);

    for(i=0; i <= strLen-wordLen; i++)
    {
        found = 1;
        for(j=0; j<wordLen; j++)
        {
            if(str[i + j] != word[j])
            {
                found = 0;
                break;
            }
        }
        if(found == 1)
        {
            for(j=i; j<=strLen-wordLen; j++)
            {
                str[j] = str[j + wordLen];
            }
            //break;
        }

    }

    printf("Present String %s", str);
    return 0;
}

