#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,c,k;
    while(cin>>s)
    {
        c=0;
        k=s.length();
        for(i=0;i<(k-1);i++)
        {
            if((s[i]>='a' && s[i]<='m') && (s[i+1]>='n' && s[i+1]<='z'))
                c=c+(s[i]-'a')+('z'-s[i+1])+1;
            else if((s[i+1]>='a' && s[i+1]<='m') && (s[i]>='n' && s[i]<='z'))
                c=c+('z'-s[i])+(s[i+1]-'a')+1;
            else if((s[i]>='a' && s[i]<='m') && (s[i+1]>='a' && s[i+1]<='m'))
                c=c+abs(s[i]-s[i+1])+1;
            else if((s[i]>='n' && s[i]<='z') && (s[i+1]>='n' && s[i+1]<='z'))
                c=c+abs(s[i]-s[i+1])+1;

              cout<<c<<endl;
              c=0;
        }
        cout<<c;
    }
    return 0;
}
