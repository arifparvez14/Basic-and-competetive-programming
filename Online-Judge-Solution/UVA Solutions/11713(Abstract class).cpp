#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,len1,len2,i,flag;
    char s1[21],s2[21];
    cin>>T;
    while(T--)
    {
        flag=0;
        scanf("%s %s",s1,s2);
        len1=strlen(s1);
        len2=strlen(s2);
        if(len1!=len2)
            flag=1;
        else if(len1==len2)
        {
            for(i=0; i<len1; i++)
            {
                if(s1[i]==s2[i])
                {
                    flag=0;
                }
                else if((s2[i]=='a'||s2[i]=='e'||s2[i]=='i'||s2[i]=='o'||s2[i]=='u')&&(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u'))
                {
                    flag=0;
                }
                else
                    flag=1;



                if(flag==1)
                     break;
            }
        }


        if(flag==0)
            cout<<"Yes"<<endl;
        else if(flag==1)
            cout<<"No"<<endl;
    }
    return 0;

}
