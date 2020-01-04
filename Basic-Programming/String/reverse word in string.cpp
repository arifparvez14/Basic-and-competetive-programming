#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100],rev[100],x[100];
    int i,l,j=-1,k;
    gets(x);
    s[0]=' ';
    for(l=0;l<strlen(x);l++)
    {
        s[l+1]=x[l];
    }
    for(i=strlen(s)-1; i>=0; i--)
    {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
        {
            j++;
            rev[j]=s[i];
        }
        else if(s[i]==' ')
        {
            for(k=j; k>=0; k--)
            {
                cout<<rev[k];
            }
            cout<<" ";
            j=-1;
        }
    }
    return 0;
}
