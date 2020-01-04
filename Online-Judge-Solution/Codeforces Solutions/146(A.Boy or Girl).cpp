#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,j,c;
    while(cin>>s)
    {
        c=0;
        for(i=0; i<s.length(); i++)
        {
            for(j=i+1; j<s.length(); j++)
            {
                if(s[i]==s[j])
                    s[j]='0';
            }
        }
        for(i=0;i<s.length();i++)
        {
            if(s[i]>='a' && s[i]<='z')
                c++;
        }
        if((c%2)==0)
            cout<<"CHAT WITH HER!"<<endl;
        else
            cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}
