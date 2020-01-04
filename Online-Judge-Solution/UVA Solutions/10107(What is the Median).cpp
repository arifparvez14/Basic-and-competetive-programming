#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,s[10001],c=1,x,n1,n2,n,i;
    while(cin>>a)
    {
         x=a;
         s[c]=x;
         sort(s,s+(c+1));
         if(c==1)
            cout<<s[1]<<endl;
         else if(c%2!=0)
         {
             n=(c+1)/2;
             cout<<s[n]<<endl;
         }
         else if(c%2==0)
         {
             n1=(c+1)/2;
             n2=n1+1;
             n=(s[n1]+s[n2])/2;
             cout<<n<<endl;
         }
         c++;
    }
    return 0;
}
