#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    int i,c,d,det,k;
    while(gets(s))
    {
        c=-1;
        d=1;
        det=0;
        k=strlen(s);
        s[k]='A';
        for(i=0; i<=k; i++)
        {
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y')
            {
                if(d>=c)
                    c=d;
                d=1;
                det++;
            }
            else
            {
                d++;
            }
        }
        if(det==0)
            cout<<strlen(s)+1<<endl;
        else
            cout<<c<<endl;
    }
    return 0;
}
