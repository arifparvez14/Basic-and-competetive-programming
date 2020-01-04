#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,l,d,sum,count,b,isprime;
    char a[100];
    while(gets(a))
    {
        isprime=0;
        sum=0;
        l=strlen(a);
        for(i=0;i<l;i++)
        {
            if(a[i]>='a' && a[i]<='z')
            {
                sum=sum+(a[i]-'a')+1;
            }
            if(a[i]>='A' && a[i]<='Z')
            {
                sum=sum+(a[i]-'A')+27;
            }
        }
        if(sum==2)
            isprime=1;
        else if(sum%2==0)
            isprime=0;
        else
        {
            isprime=1;
            for (i=3; i<=sqrt(sum); i+=2){
                if (sum%i==0)
                {
                    isprime=0;
                    break;
                }
            }
        }
        if(isprime==1)
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");

    }
    return 0;
}
