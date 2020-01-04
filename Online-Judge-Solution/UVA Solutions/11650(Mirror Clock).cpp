#include<bits/stdc++.h>
using namespace std;
int main()
{
    int H1,M1,H,M,T,i;
    cin>>T;
    while(T--)
    {
        scanf("%d:%d",&H1,&M1);
        if(M1>0 && H1>0)
        {
            H=11-H1;
            if(H1==11)
                H=12;
            else if(H1==12)
                H=11;
            M=60-M1;
        }
        else if(H1>0 && M1==0)
        {
            H=12-H1;
            if(H1==12)
                H=12;
            M=M1;
        }
         printf("%02d:%02d\n",H,M);
    }
    return 0;

}
