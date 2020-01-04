#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    int i,c,j,len,k;
    while(gets(s))
    {
        len=strlen(s);
        i=0,c=-1;
        for(i=0;i<len;i++)
        {
            if(s[i]==' ')
            {
                for(j=(i-1); j>=c+1; j--)
                    printf("%c",s[j]);


                printf(" ");
                c=i;
            }

        }
        for(k=(len-1);k>c;k--)
            printf("%c",s[k]);

        printf("\n");
    }
    return 0;
}
