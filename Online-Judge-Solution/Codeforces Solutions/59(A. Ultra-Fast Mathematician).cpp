#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    int c[1000],i;
    while(cin>>s1>>s2)
    {
        for(i=0;i<s1.length();i++)
        {
            if((s1[i]=='1' && s2[i]=='0') || (s1[i]=='0' && s2[i]=='1'))
                c[i]=1;
            else
                c[i]=0;

        }
        for(i=0;i<s1.length();i++)
        {
            cout<<c[i];
        }
        cout<<endl;
    }
    return 0;
}
