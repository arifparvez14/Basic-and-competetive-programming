#include<stdio.h>
#include<string.h>
int main()
{
    int i,l;
    char s[100];
    while(scanf("%s",s)==1)
    {
        l=strlen(s);
        for(i=0;i<l;i++)
        {
            if(s[i]=='A' || s[i]=='B' || s[i]=='C')
                printf("2");
            if(s[i]=='D' || s[i]=='E' || s[i]=='F')
                printf("3");
            if(s[i]=='G' || s[i]=='H' || s[i]=='I')
                printf("4");
            if(s[i]=='J' || s[i]=='K' || s[i]=='L')
                printf("5");
            if(s[i]=='M' || s[i]=='N' || s[i]=='O')
                printf("6");
            if(s[i]=='P' || s[i]=='Q' || s[i]=='R')
                printf("7");
            if(s[i]=='T' || s[i]=='U' || s[i]=='V')
                printf("8");
            if(s[i]=='W' || s[i]=='X' || s[i]=='Y')
                printf("9");
            if(s[i]=='1')
                printf("1");
            if(s[i]=='0')
                printf("0");
            if(s[i]=='-')
                printf("-");
            if(s[i]=='S')
                printf("7");
            if(s[i]=='Z')
                printf("9");
        }
        printf("\n");

    }
    return 0;
}
