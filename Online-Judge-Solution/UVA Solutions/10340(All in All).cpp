#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int l,i;
    string s1,s2;
    while(cin>>s1>>s2)
    {
        l=0;
        for(i=0;i<s2.length();i++)
        {
            if(s2[i]==s1[l])
            {
                l++;
            }
        }
        if(l==s1.length())
            printf("Yes\n");
        else
            printf("No\n");

    }
    return 0;
}
