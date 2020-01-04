#include<bits/stdc++.h>
#define max 100000
using namespace std;
int main()
{
    string s,t;
    int a1[max],a2[max],a3[max],a4[max],i,j,sum1,sum2,k,l,m,n,flag;
    while(cin>>s>>t)
    {
        m=n=flag=0;
        k=s.length();
        l=t.length();
        for(i=0; i<s.length(); i++)
        {
            if(s[i]>='0' && s[i]<='9')
                a1[i]=s[i]-48;
            else if(s[i]>='A' && s[i]<='Z')
                a1[i]=(s[i]-65)+10;
        }
        for(i=0; i<t.length(); i++)
        {
            if(t[i]>='0' && t[i]<='9')
                a2[i]=t[i]-48;
            else if(t[i]>='A' && t[i]<='Z')
                a2[i]=(t[i]-65)+10;
        }
        for(i=1; i<=36; i++)
        {
            sum1=0;
            for(j=0; j<k; j++)
            {
                sum1=sum1+a1[j]*pow(i,k-(j+1));
            }
            a3[i]=sum1;
        }
        for(i=1; i<=36; i++)
        {
            sum2=0;
            for(j=0; j<l; j++)
            {
                sum2=sum2+a2[j]*pow(i,l-(j+1));
            }
            a4[i]=sum2;
        }
        for(i=1; i<=36; i++)
        {
            for(j=1; j<=36; j++)
            {
                if(a3[i]==a4[j])
                {
                        m=i;
                        n=j;
                        flag=1;

                }
                if(flag=1)
                    break;
            }
        }
        if(m!=0 && n!=0)
        {
            cout<<s;
            printf(" (base %d) = ",m);
            cout<<t;
            printf(" (base %d)\n",n);
        }
        else
        {
            cout<<s;
            printf(" is not equal to ");
            cout<<t;
            printf(" in any base 2..36\n");
        }

    }
    return 0;
}
