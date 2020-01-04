#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[200];
    long int l,n,m,i,j;
    while(cin>>n && n!=0)
    {
        getchar();
        gets(s);
        l=strlen(s);
        m=l/n;
        for(i=1;i<=l;i++)
        {
            if(i%m==0)
            {
                for(j=(i-1);j>=(i-m);j--)
                cout<<s[j];
            }
        }
        printf("\n");
    }
    return 0;
}
