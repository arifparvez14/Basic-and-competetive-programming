#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char a[1001];
    long long int n,s,r;
    int  i,l;
    while(scanf("%s",a)==1)
    {
        s=0,l=0;
        l=strlen(a);
        if(a[0]=='0' && l==1)
            break;

        char c[10];
        for(i=0; i<l; i++)
        {
            c[0]=a[i];
            n=atoi(c);
            s=(s*10+n)%11;
        }
        if(s==0)
            printf("%s is a multiple of 11.\n",a);
        else
            printf("%s is not a multiple of 11.\n",a);
    }
    return 0;
}
