#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    long long int len,i,x,count;
    while(gets(s))
    {
        count=0;
        x=0;
        len=strlen(s);
        if(s[0]>='a' && s[0]<='z')
        {
            x++;
            for(i=1; i<len; i++)
            {
                if(s[i]>='A' && s[i]<='Z')
                    count++;
            }
        }
        else if((s[0]>='A' && s[0]<='Z'))
        {
            for(i=0; i<len; i++)
            {
                if(s[i]>='A' && s[i]<='Z')
                    count++;
            }
        }

        if(x==1 && count==(len-1))
        {
            s[0]=s[0]-32;
            for(i=1; i<len; i++)
            {
                s[i]=s[i]+32;
            }
        }
        else if(count==len)
        {
            for(i=0; i<len; i++)
            {
                s[i]=s[i]+32;
            }
        }
        for(i=0; i<len; i++)
        {
            cout<<s[i];
        }
        cout<<endl;

    }
    return 0;
}
