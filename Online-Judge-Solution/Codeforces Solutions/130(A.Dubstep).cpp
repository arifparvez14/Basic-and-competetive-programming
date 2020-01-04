#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char a[1000];
    int i,k,l;
    while(cin>>s)
    {
        l=0;
        k=s.length();
        for(i=0; i<s.length(); i++)
        {
            if((s[i]=='W') && (s[i+1]=='U') && (s[i+2]=='B'))
            {
                s[i]=' ',s[i+1]='0',s[i+2]='0';
                i=i+2;
            }
        }
        for(i=0; i<k; i++)
        {
            if((s[i]==' ') || (s[i]>='A' && s[i]<='Z'))
                cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
