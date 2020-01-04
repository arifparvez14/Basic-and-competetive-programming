#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[101],b[101];
    int i,l,c,count;
    while(gets(a),gets(b))
    {
        count=0;
        l=strlen(a);
        for(i=0; i<l; i++)
        {
            if((a[i]>='a' && a[i]<='z') && (b[i]>='A' && b[i]<='Z'))
            {
                b[i]=b[i]+32;
            }
            else if((b[i]>='a' && b[i]<='z') && (a[i]>='A' && a[i]<='Z'))
            {
                a[i]=a[i]+32;
            }
            else if((b[i]>='A' && b[i]<='Z') && (a[i]>='A' && a[i]<='Z'))
            {
                a[i]=a[i]+32;
                b[i]=b[i]+32;
            }

            if(a[i]>b[i])
            {
                count=1;
                break;
            }
            else if(a[i]<b[i])
            {
                count=2;
                break;
            }
        }
        if(count==0)
            cout<<"0"<<endl;
        else if(count==1)
            cout<<"1"<<endl;
        else
            cout<<"-1"<<endl;
    }
    return 0;
}
