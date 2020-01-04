#include<bits/stdc++.h>
#define max 100000
using namespace std;
int main()
{
    int b1,b2,i,a[max],flag,sum1,sum2,k,b[max],r,l;
    string s;
    char t[max];
    while(cin>>b1>>b2>>s)
    {
        flag=sum1=sum2=l=0;
        k=s.length();
        for(i=0; i<s.length(); i++)
        {
            if(s[i]>='0' && s[i]<='9')
                a[i]=s[i]-48;
            else if(s[i]>='A' && s[i]<='Z')
                a[i]=(s[i]-65)+10;

            if(a[i]>(b1-1))
                flag=1;
        }
        if(flag==1)
        {
            cout<<s<<" "<<"is an illegal base"<<" "<<b1<<" "<<"number"<<endl;
        }
        else if(flag==0)
        {
            for(i=0; i<k; i++)
            {
                sum1=sum1+a[i]*pow(b1,k-(i+1));
            }
            if(b2==10)
                cout<<s<<" "<<"base"<<" "<<b1<<" "<<"="<<" "<<sum1<<" "<<"base"<<" "<<b2<<endl;
            else
            {
                while(sum1!=0)
                {
                    r=sum1%b2;
                    if(r>=0 && r<=9)
                        t[l]=r+48;
                    else if(r>=10 && r<=35)
                        t[l]=r+55;
                    sum1=sum1/b2;
                    l++;
                }
            cout<<s<<" "<<"base"<<" "<<b1<<" "<<"="<<" ";
            for(i=(l-1);i>=0;i--)
            {
                cout<<t[i];
            }
            cout<<" "<<"base"<<" "<<b2<<endl;
            }
        }
    }
    return 0;
}
