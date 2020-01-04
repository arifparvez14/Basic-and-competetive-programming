#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000],v[1000];
    int x[1000];
    int i,j,k;
    while(gets(s))
    {
        j=0;
        for(i=0; i<strlen(s); i=i+2)
        {
            v[j]=s[i];
            j++;
        }

        for(i=0; i<j; i++)
        {
            x[i]=v[i]-48;
        }
        sort(x,x+j);
        k=0;
        for(i=0; i<strlen(s); i=i+2)
        {
            s[i]=x[k]+48;
            k++;
        }
         cout<<s<<endl;
    }
    return 0;
}
