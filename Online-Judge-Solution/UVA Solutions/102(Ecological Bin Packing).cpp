#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int b1,g1,c1,b2,g2,c2,b3,g3,c3,bgc,bcg,cbg,cgb,gbc,gcb,a[10],i;
    while(cin>>b1>>g1>>c1>>b2>>g2>>c2>>b3>>g3>>c3)
    {
        bgc=(b2+b3)+(g1+g3)+(c1+c2);
        bcg=(b2+b3)+(c1+c3)+(g1+g2);

        cbg=(c2+c3)+(b1+b3)+(g1+g2);
        cgb=(c2+c3)+(g1+g3)+(b1+b2);

        gbc=(g2+g3)+(b1+b3)+(c1+c2);
        gcb=(g2+g3)+(c1+c3)+(b1+b2);


        a[0]=bgc;
        a[1]=bcg;
        a[2]=cbg;
        a[3]=cgb;
        a[4]=gbc;
        a[5]=gcb;

        sort(a,a+6);

        if(a[0]==a[1])
        {
         if((a[0]==bcg && a[1]==bgc)||(a[0]==bcg && a[1]==cbg)||(a[0]==bcg && a[1]==cgb)||(a[0]==bcg && a[1]==gbc)||(a[0]==bcg && a[1]==gcb))
            printf("BCG %lld\n",a[0]);
         else if((a[0]==bgc && a[1]==cbg)||(a[0]==bgc && a[1]==cgb)||(a[0]==bgc && a[1]==gbc)||(a[0]==bgc && a[1]==gcb))
            printf("BGC %lld\n",a[0]);
         else if((a[0]==cbg && a[1]==cgb)||(a[0]==cbg && a[1]==gbc)||(a[0]==cbg && a[1]==gcb))
            printf("CBG %lld\n",a[0]);
         else if((a[0]==cgb && a[1]==gbc)||(a[0]==cgb && a[1]==gcb))
            printf("CGB %lld\n",a[0]);
         else if(a[0]==gbc && a[1]==gcb)
            printf("GBC %lld\n",a[0]);
         else
            printf("GCB %lld\n",a[0]);


        }
        else if(a[0]==bgc)
            printf("BGC %lld\n",a[0]);
        else if(a[0]==bcg)
            printf("BCG %lld\n",a[0]);
        else if(a[0]==cbg)
            printf("CBG %lld\n",a[0]);
        else if(a[0]==cgb)
            printf("CGB %lld\n",a[0]);
        else if(a[0]==gbc)
            printf("GBC %lld\n",a[0]);
        else if(a[0]==gcb)
            printf("GCB %lld\n",a[0]);

    }
    return 0;

}
