#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    long int T,i,cm,ca,cr,cg,ci,ct,count;
    cin>>T;
    getchar();
    while(T--)
    {
        cm=0,ca=0,cr=0,cg=0,ci=0,ct=0,count=0;
        getline(cin,s);
        for(i=0;i<s.size();i++)
        {
           if(s[i]=='M')
                cm++;
           else if(s[i]=='A')
                 ca++;
           else if(s[i]=='R')
                 cr++;
           else if(s[i]=='G')
                 cg++;
           else if(s[i]=='I')
                 ci++;
           else if(s[i]=='T')
                 ct++;
           if(cm>=1 && ca>=3 && cr>=2 && cg>=1 && ci>=1 && ct>=1)
           {
               count++;
               cm=cm-1;
               ca=ca-3;
               cr=cr-2;
               cg=cg-1;
               ci=ci-1;
               ct=ct-1;
           }

        }
        cout<<count<<"\n";
    }
    return 0;
}
