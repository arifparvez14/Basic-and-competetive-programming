#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,k,i,count;
    while(cin>>n)
    {
        k=count=0;
        if(n%4==0 || n%7==0 || n%44==0 || n%47==0 || n%444==0 || n%447==0 || n%474==0)
            cout<<"YES"<<endl;
        else
        {
            while(n!=0)
            {
                r=n%10;
                n=n/10;
                if(r!=4 && r!=7)
                    count=1;
            }
            if(count==0)
                cout<<"YES"<<endl;
            else if(count==1)
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
