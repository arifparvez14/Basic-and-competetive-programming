#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100000];
    int i,count=0,l;
    while(gets(s))
    {
        l=strlen(s);
        for(i=0;i<l;i++)
        {
            if(s[i]=='"')
                count++;

            if(s[i]=='"' && (count%2!=0))
                cout<<"``";
            else if(s[i]=='"' && (count%2==0))
                cout<<"''";
            else
                cout<<s[i];

        }
        printf("\n");
    }
    return 0;
}

