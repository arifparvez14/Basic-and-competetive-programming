#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i,j;
    string s;
    while(cin>>n>>t)
    {
        cin>>s;
        for(j=1;j<=t;j++)
        {
            for(i=1;i<n;i++)
            {
                if(s[i]=='G' && s[i-1]=='B')
                {
                    s[i]='B';
                    s[i-1]='G';
                    i++;
                }
                else
                    continue;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
