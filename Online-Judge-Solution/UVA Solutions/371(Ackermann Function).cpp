#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,L,H,V,S,k,count,n,n1;
    while(cin>>L>>H && L!=0 && H!=0)
    {
        count=0;
        if(L<=H)
        {
            for(k=H; k>=L; k--)
            {
                n=0,n1=k;
                do
                {
                    if(n1%2==0)
                    {
                        n1=n1/2;
                        n++;
                    }
                    else
                    {
                        n1=3*n1+1;
                        n++;
                    }
                }while(n1!=1);
                if(n>=count)
                {
                    count=n;
                    V=k;
                }
            }
            cout<<"Between "<<L<<" and "<<H<<", "<<V<<" generates the longest sequence of "<<count<<" values."<<'\n';
        }
        else
        {
            for(k=L; k>=H; k--)
            {
                n=0,n1=k;
                do
                {
                    if(n1%2==0)
                    {
                        n1=n1/2;
                        n++;
                    }
                    else
                    {
                        n1=3*n1+1;
                        n++;
                    }
                }while(n1!=1);
                if(n>=count)
                {
                    count=n;
                    V=k;
                }
            }
            cout<<"Between "<<H<<" and "<<L<<", "<<V<<" generates the longest sequence of "<<count<<" values."<<'\n';
        }
    }
    return 0;
}
