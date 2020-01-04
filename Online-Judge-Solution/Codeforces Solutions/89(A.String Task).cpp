#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000],b[1000];
    int i,len,k;
    cin>>a;
    for(i=0; i<=250; i=i+2)
    {
        b[i]='.';
    }
    len=strlen(a);
    k=1;
    for(i=0; i<len; i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        {
            if(a[i]=='A' || a[i]=='O' || a[i]=='Y' || a[i]=='E' || a[i]=='U' || a[i]=='I')
                continue;
            else
            {
                a[i]=a[i]+32;
                b[k]=a[i];
                k=k+2;
            }
        }
        else if(a[i]>='a' && a[i]<='z')
        {
            if(a[i]=='a' || a[i]=='o' || a[i]=='y' || a[i]=='e' || a[i]=='u' || a[i]=='i')
                continue;
            else
            {
                b[k]=a[i];
                k=k+2;
            }
        }
    }
    for(i=0; i<(k-1); i++)
    {
        cout<<b[i];
    }

    return 0;
}
