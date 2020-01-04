#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int T,i,sum,l,j,count;
    char s[100];
    cin>>T;
    getchar();
    for(i=1;i<=T;i++)
    {
        count=0;
        sum=0;
        gets(s);
        l=strlen(s);
        for(j=0;j<l;j++)
        {
            if(s[j]=='O')
            {
                count++;
                sum=sum+count;
            }
            else
                count=0;
        }
        printf("%ld\n",sum);
    }
    return 0;
}
