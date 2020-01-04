#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1001];
    long long int n,s,r;
    int  i,l;
    while(scanf("%s",a)==1)
    {
        s=0,l=0;
        l=strlen(a);
        if(a[0]=='0' && l==1)
            break;

        char c[10];
        for(i=0; i<l; i++)
        {
            c[0]=a[i];
            n=atoi(c);
            s=(s*10+n)%17;
        }
        if(s==0)
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }
    return 0;
}
