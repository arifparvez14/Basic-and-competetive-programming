#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        for(int i=0; i< s.length(); i++)
        {
            printf("%c",s[i]-7);
        }
        printf("\n");
    }
    return 0;
}
