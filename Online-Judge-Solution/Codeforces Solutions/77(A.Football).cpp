#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c,d,i,flag;
    string s;
    while(cin>>s)
    {
        c=0;
        d=0,flag=0;
        for(i=0; i<s.length(); i++)
        {
            if(s[i]=='0')
            {
                d=0;
                c++;
                if(c==7)
                {
                    flag=1;
                    break;
                }
            }
            else if(s[i]=='1')
            {
                c=0;
                d++;
                if(d==7)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
