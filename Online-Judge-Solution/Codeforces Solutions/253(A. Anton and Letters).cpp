#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    set<char>se;
    char s[10000];
    gets(s);
    for(i=0; i<strlen(s); i++)
    {
        if(s[i]>='a' && s[i]<='z')
        se.insert(s[i]);
    }
    cout<<se.size();
    return 0;
}
