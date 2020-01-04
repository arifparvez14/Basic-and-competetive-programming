#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,T,i,j,num,d,c0,c1,c2,c3,c4,c5,c6,c7,c8,c9;
    cin>>T;
    for(j=1; j<=T; j++)
    {
        c0=0;c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0;
        cin>>num;
        for(i=1; i<=num; i++)
        {
            if(i<=9)
            {
                if(i==0)
                    c0++;
                else if(i==1)
                    c1++;
                else if(i==2)
                    c2++;
                else if(i==3)
                    c3++;
                else if(i==4)
                    c4++;
                else if(i==5)
                    c5++;
                else if(i==6)
                    c6++;
                else if(i==7)
                    c7++;
                else if(i==8)
                    c8++;
                else if(i==9)
                    c9++;
            }

            else if(i>9)
            {
                n=i;
                while(n>0)
                {
                    d=n%10;
                    n=n/10;
                    if(d==0)
                        c0++;
                    else if(d==1)
                        c1++;
                    else if(d==2)
                        c2++;
                    else if(d==3)
                        c3++;
                    else if(d==4)
                        c4++;
                    else if(d==5)
                        c5++;
                    else if(d==6)
                        c6++;
                    else if(d==7)
                        c7++;
                    else if(d==8)
                        c8++;
                    else if(d==9)
                        c9++;
                }
            }
        }

        printf("%ld %ld %ld %ld %ld %ld %ld %ld %ld %ld\n",c0,c1,c2,c3,c4,c5,c6,c7,c8,c9);

    }

return 0;
}

