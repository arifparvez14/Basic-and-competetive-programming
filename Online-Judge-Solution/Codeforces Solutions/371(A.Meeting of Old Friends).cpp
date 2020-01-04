#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int l1,r1,l2,r2,k,d;
    cin>>l1>>r1>>l2>>r2>>k;
    if(l2>r1)
        cout<<"0"<<endl;
    else if(r1>=l2)
    {
        if(r2<=r1)
        {
            if(l2>=l1)
            {
                d=r2-l2;
                if(d<0)
                    printf("0");
                else
                {
                    if(k>=l2 && k<=r2)
                        printf("%lld",d);
                    else
                        printf("%lld",d+1);
                }
            }
            else
            {
                d=r2-l1;
                if(d<0)
                    printf("0");
                else
                {
                    if(k>=l1 && k<=r2)
                        printf("%lld",d);
                    else
                        printf("%lld",d+1);
                }

            }
        }
        else if(r2>r1)
        {
            if(l2>=l1)
            {
                d=r1-l2;
                if(d<0)
                    printf("0");
                else
                {
                    if(k>=l2 && k<=r1)
                        printf("%lld",d);
                    else
                        printf("%lld",d+1);
                }
            }
            else
            {
                d=r1-l1;
                if(d<0)
                    printf("0");
                else
                {
                    if(k>=l1 && k<=r1)
                        printf("%lld",d);
                    else
                        printf("%lld",d+1);
                }
            }
        }
    }

    return 0;
}
