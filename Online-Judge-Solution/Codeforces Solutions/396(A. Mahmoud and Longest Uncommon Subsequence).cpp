#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int l1,l2,c,i;
    string s1,s2;
    while(cin>>s1>>s2)
    {
        c=0;
        l1=s1.size();
        l2=s2.size();
        if(l1==l2)
        {
            for(i=0; i<l1; i++)
            {
                if(s1[i]!=s2[i])
                    c=1;
            }
            if(c==0)
                cout<<"-1"<<endl;
            else if(c==1)
                cout<<l1<<endl;
        }
        else if(l1>l2)
            cout<<l1<<endl;
        else
            cout<<l2<<endl;
    }
    return 0;
}
