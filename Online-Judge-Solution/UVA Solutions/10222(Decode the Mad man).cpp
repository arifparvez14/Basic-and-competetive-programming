#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s1[100]={'e','r','t','y','u','i','o','p','[',']','\\',
                'd','f','g','h','j','k','l',';','\'',
                'c','v','b','n','m',',','.','/',
                '2','3','4','5','6','7','8','9','0','-','=',
                'E','R','T','Y','U','I','O','P',
                'D','F','G','H','J','K','L',
                'C','V','B','N','M',};

    char s2[100]={'q','w','e','r','t','y','u','i','o','p','[',
                'a','s','d','f','g','h','j','k','l',
                'z','x','c','v','b','n','m',',',
                '`','1','2','3','4','5','6','7','8','9','0',
                'q','w','e','r','t','y','u','i',
                'a','s','d','f','g','h','j',
                'z','x','c','v','b',};
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
