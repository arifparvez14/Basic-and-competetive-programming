#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  int i,n,j,a,b,c,x,mm;
    long long int v[100009];
    while(cin>>n)
    {
        x=mm=0;
        for(i=0;i<n;i++)
        {
           cin>>v[i];
        }
        sort(v,v+n);
        for(i=0;i<n-2;i++)
        {
            a=v[i],b=v[i+1],c=v[i+2];


                if(((a+b)>c) && ((b+c)>a) && ((c+a)>b))
                //{
                    x=1;
                //}

        }
        if(x==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
