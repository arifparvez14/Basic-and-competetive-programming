#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n,x,y,flag=0;
    while(1)
    {
        cin>>n;
        if(n>=0 && n<=10)
        {
            if(flag==0)
                x=n;
            else if(flag==1)
                y=n;
            flag++;
        }
        else
            cout<<"nota invalida"<<endl;

        if(flag==2)
        {
            printf("media = %0.2f\n",(x+y)/2);
            break;
        }
    }
    return 0;
}
