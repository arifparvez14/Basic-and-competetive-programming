#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,count;
    string s;
    while(cin>>n)
    {
        count=0;
        for(i=1; i<=n; i++)
        {
            cin>>s;
            if((s[0]=='+' && s[1]=='+') || (s[1]=='+' && s[2]=='+'))
                count++;
            else if((s[0]=='-' && s[1]=='-') || (s[1]=='-' && s[2]=='-'))
                count--;
        }
        cout<<count<<endl;
    }
    return 0;
}


