#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,input,i,det,count,a[100],k;
    while(cin>>input && input!=0)
    {
        count=0;
        i=input+1;
        while(1)
        {
            if((i-(i/10))==input)
            {
                a[count]=i;
                count++;
            }
            if(((i-(i/10))!=input) && count>0)
                break;
            i++;
        }
        for(i=0; i<count; i++)
        {
            cout<<a[i];
            if(i<=(count-1))
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;

}

