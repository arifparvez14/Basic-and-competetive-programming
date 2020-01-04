#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,l,u;
    while(cin>>s)
    {
        l=u=0;
        for(i=0;i<s.length();i++)
        {
            if(s[i]>='A' && s[i]<='Z')
                u++;
            else if(s[i]>='a' && s[i]<='z')
                l++;
        }
        if(l>=u)
        {
           for(i=0;i<s.length();i++)
           {
                if(s[i]>='A' && s[i]<='Z')
                    s[i]=s[i]+32;
           }
        }
        else
        {
            for(i=0;i<s.length();i++)
           {
                if(s[i]>='a' && s[i]<='z')
                    s[i]=s[i]-32;
           }
        }
        cout<<s<<endl;;
    }
    return 0;
}
