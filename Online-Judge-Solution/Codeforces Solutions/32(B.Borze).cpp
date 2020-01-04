#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[250];
    int v[250];
    int i,k;
    while(gets(s))
    {
        k=0;
        for(i=0; i<strlen(s); i++)
        {
            if(s[i]=='-')
            {
                if(s[i+1]=='.')
                {
                    v[k]=1;
                    k++;
                    i++;
                }
                else if(s[i+1]=='-')
                {
                    v[k]=2;
                    k++;
                    i++;
                }
            }
            else if(s[i]=='.')
            {
                v[k]=0;
                k++;
            }
        }
        for(i=0; i<k; i++)
        {
            cout<<v[i];
        }
        cout<<endl;
    }
    return 0;
}
