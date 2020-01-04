#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,n;
    while(cin>>s)
    {
        n=0;
        for(i=0; i<s.length(); i++)
        {
            if((s[i]=='h') && n==0)
                n++;
            else if((s[i]=='e') && n==1)
                n++;
            else if((s[i]=='l') && n==2)
                n++;
            else if((s[i]=='l') && n==3)
                n++;
            else if((s[i]=='o') && n==4)
                n++;

        }
    if(n==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


    }
    return 0;
}
