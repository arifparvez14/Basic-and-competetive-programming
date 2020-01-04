#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10];
    char s2[10]="Hajj";
    char s3[2]="*";

    int a,b,i=1;
    while(scanf("%s",s1)==1)
    {
        b=strcmp(s3,s1);
        a=strcmp(s2,s1);
        if(0==b)
            break;

         else if(0!=a)
            printf("Case %d: Hajj-e-Asghar\n",i);
        else
            printf("Case %d: Hajj-e-Akbar\n",i);
        i++;
    }

    return 0;
}
