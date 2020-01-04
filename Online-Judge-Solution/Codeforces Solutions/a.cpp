#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,r,i,sum,res,rem;
    while(cin>>k>>r)
    {
        i=1;sum=0;
        while(1)
        {
            sum=i*k;
            res=sum/10;
            rem=sum%10;
            cout<<sum<<" "<<res<<" "<<rem<<" ";
            if((sum%10==0) || (res*10)+r==sum)
            {
                cout<<i<<endl;
                break;
            }
            i++;
        }
    }
    return 0;
}
