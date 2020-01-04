#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,c,s1,s2,k;
    while(cin>>s)
    {
        c=s1=s2=0;
        k=s.length();
        s1=s[0]-'a';
        s2=26-s1;
        if(s1<=s2)
            c=c+s1;
        else
            c=c+s2;
        for(i=0; i<(k-1); i++)
        {
            s1=abs(s[i]-s[i+1]);
            s2=26-s1;

            if(s1<=s2)
                c=c+s1;
            else
                c=c+s2;

        }
        cout<<c<<endl;
    }
    return 0;
}
