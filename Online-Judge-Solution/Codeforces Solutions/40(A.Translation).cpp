#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    string s1,s2;
    int i,n,k;
    while(cin>>s1>>s2)
    {
        n=0;
        reverse(s1.begin(),s1.end());
        for(i=0;i<s1.length();i++)
        {
            if(s1[i]!=s2[i])
                n++;
        }
        if(n==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}
