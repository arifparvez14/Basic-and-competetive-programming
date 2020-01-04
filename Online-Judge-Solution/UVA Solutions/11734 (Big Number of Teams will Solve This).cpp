#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,i,d,h,l,flag,y,k,p,q,j;
    char s[100],x[100],z[100],e[100];
    cin>>n;
    getchar();
    for(i=1; i<=n; i++)
    {
        d=0,flag=0,h=0;
        gets(s);
        gets(x);
        p=strlen(s);
        q=strlen(x);
        l=strcmp(s,x);
        if(l==0)
            printf("Case %ld: Yes\n",i);
        else
        {
            for(y=0; y<q; y++)
            {
                if((x[y]>='a' && x[y]<='z') || (x[y]>='A' && x[y]<='Z'))
                {
                    z[h]=x[y];
                    h++;
                }
            }
            for(k=0; k<p; k++)
            {
                if((s[k]>='a' && s[k]<='z') || (s[k]>='A' && s[k]<='Z'))
                {
                    e[d]=s[k];
                    d++;
                }
            }
            if(d==h)
            {
                for(j=0; j<d; j++)
                {
                    if(z[j]!=e[j])
                    {
                        flag=1;
                    }
                }
            }
            else
                flag=1;


            if(d==h && flag==0)
                printf("Case %ld: Output Format Error\n",i);
            else
                printf("Case %ld: Wrong Answer\n",i);
        }
    }
    return 0;
}
