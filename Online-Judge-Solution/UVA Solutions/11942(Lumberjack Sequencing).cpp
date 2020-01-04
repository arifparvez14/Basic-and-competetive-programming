#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,a[20],T,flag;
    cin>>T;
    cout<<"Lumberjacks:\n";
    while(T--)
    {
        flag=0;
        for(i=0; i<10; i++)
        {
            cin>>a[i];
        }
        if(a[0]>a[1])
        {
            for(i=0; i<9; i++)
            {
                if(a[i]<=a[i+1])
                {
                    flag=1;
                    break;
                }
            }
        }
        else if(a[0]<a[1])
        {
            for(i=0; i<9; i++)
            {
                if(a[i]>=a[i+1])
                {
                    flag=1;
                    break;
                }
            }
        }
        else if(a[0]==a[1])
            flag=1;


        if(flag==0)
            cout<<"Ordered\n";
        else
            cout<<"Unordered\n";

    }
    return 0;
}
