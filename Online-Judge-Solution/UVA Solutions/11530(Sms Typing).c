#include<stdio.h>
#include<string.h>
int main()
{
    long int i,n,length,j,sum;
    char s[200];
    scanf("%ld",&n);
    getchar();
    for(i=1;i<=n;i++)
    {
        sum=0;
        gets(s);
        length=strlen(s);
        for(j=0;j<length;j++)
        {
        if(s[j]=='a' || s[j]=='d' || s[j]=='g' || s[j]=='j' || s[j]=='m' || s[j]=='p' || s[j]=='t' || s[j]=='w' || s[j]==' ')
        sum=sum+1;

        if(s[j]=='b' || s[j]=='e' || s[j]=='h' || s[j]=='k' || s[j]=='n' || s[j]=='q' || s[j]=='u' || s[j]=='x')
        sum=sum+2;

        if(s[j]=='c' || s[j]=='f' || s[j]=='i' || s[j]=='l' || s[j]=='o' || s[j]=='r' || s[j]=='v' || s[j]=='y')
        sum=sum+3;

        if(s[j]=='s' || s[j]=='z')
        sum=sum+4;
        }
        printf("Case #%d: %d\n",i,sum);
    }
    return 0;
}
