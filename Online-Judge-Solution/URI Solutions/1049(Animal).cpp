#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s1[100],s2[100],s3[100];
    while(gets(s1),gets(s2),gets(s3))
    {
        if(s1[0]=='v')
        {
            if(s2[0]=='a')
            {
                if(s3[0]=='c')
                    cout<<"aguia"<<endl;
                else if(s3[0]=='o')
                    cout<<"pomba"<<endl;
            }
            else if(s2[0]=='m')
            {
                if(s3[0]=='o')
                    cout<<"homem"<<endl;
                else if(s3[0]=='h')
                    cout<<"vaca"<<endl;
            }
        }
        else if(s1[0]=='i')
        {
            if(s2[0]=='i')
            {
                if((s3[0]=='h') && (s3[1]=='e') && (s3[2]=='m'))
                    cout<<"pulga"<<endl;
                else if((s3[0]=='h') && (s3[1]=='e') && (s3[2]=='r'))
                    cout<<"lagarta"<<endl;
            }
            else if(s2[0]=='a')
            {
                if(s3[0]=='h')
                    cout<<"sanguessuga"<<endl;
                else if(s3[0]=='o')
                    cout<<"minhoca"<<endl;
            }
        }
    }
    return 0;
}
