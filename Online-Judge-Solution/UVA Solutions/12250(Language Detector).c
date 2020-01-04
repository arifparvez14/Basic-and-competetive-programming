#include <stdio.h>
#include <string.h>
int main()
{
    char str1[]="HELLO";
    char str2[]="HOLA";
    char str3[]="HALLO";
    char str4[]="BONJOUR";
    char str5[]="CIAO";
    char str6[]="ZDRAVSTVUJTE";
    char str7[100];
    int countt=0;

    while(gets(str7)&& str7[0]!='#')
    {


        if(strcmp(str7,str1)==0)
            printf("Case %d: ENGLISH\n",countt+1);
        else if(strcmp(str7,str2)==0)
            printf("Case %d: SPANISH\n",countt+1);
        else if(strcmp(str7,str3)==0)
            printf("Case %d: GERMAN\n",countt+1);
        else if(strcmp(str7,str4)==0)
            printf("Case %d: FRENCH\n",countt+1);
        else if(strcmp(str7,str5)==0)
            printf("Case %d: ITALIAN\n",countt+1);
        else if(strcmp(str7,str6)==0)
            printf("Case %d: RUSSIAN\n",countt+1);
        else
            printf("Case %d: UNKNOWN\n",countt+1);

        countt++;
    }
    return 0;
}



