#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100];
    char b[100];
    int i;

    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        b[i]=a[i];
    }
    b[i]='\0';

    printf("First string = %s\n",a);
    printf("Second string = %s\n",b);
    printf("Character Copied = %d\n",i);

    return 0;
}
