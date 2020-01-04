#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[50],c[10];
    long long int i,len,sum,x,k;
    while(scanf("%s",s)==1)
    {
        sum=0;
        len=strlen(s);
        if(s[0]=='0' && len==1)
            break;

        for(i=0;i<len;i++)
        {
           c[0]=s[i];
           x=atoi(c);
           k=len-i;
           sum=sum+x*(pow(2,k)-1);
        }
        cout<<sum<<endl;

    }
   return 0;
}
