#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s1[50]={'W','E','R','T','Y','U','I','O','P','[',']','\\',
                'S','D','F','G','H','J','K','L',';','\'',
                'X','C','V','B','N','M',',','.','/',
                '1','2','3','4','5','6','7','8','9','0','-','='};

    char s2[50]={'Q','W','E','R','T','Y','U','I','O','P','[',']',
                'A','S','D','F','G','H','J','K','L',';',
                'Z','X','C','V','B','N','M',',','.',
                '`','1','2','3','4','5','6','7','8','9','0','-'};
    string s3;
    long int i,l,j;
    while(getline(cin,s3))
    {
        l=s3.length();
        for(i=0; i<l; i++)
        {
            if(s3[i]==' ')
            {
                cout<<" ";
                continue;
            }
            for(j=0; j<strlen(s1); j++)
            {
                if(s3[i]==s1[j])
                    cout<<s2[j];
            }
        }
        cout<<endl;
    }
    return 0;
}
