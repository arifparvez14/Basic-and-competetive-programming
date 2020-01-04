#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100]="one";
    char str2[100]="two";
    char str3[100]="three";
    char str4[100];
    int i,k;
    scanf("%d",&k);
    getchar();
    for(i=0;i<k;i++){

    gets(str4);

    if(strlen(str4)==3 && (str1[0]==str4[0]&&str1[2]==str4[2])||(str1[0]==str4[0]&&str1[1]==str4[1])||(str1[1]==str4[1]&&str1[2]==str4[2]))
        printf("1\n");

    if(strlen(str4)==3 && (str2[0]==str4[0]&&str2[2]==str4[2])||(str2[0]==str4[0]&&str2[1]==str4[1])||(str2[1]==str4[1]&&str2[2]==str4[2]))
        printf("2\n");

    if(strlen(str4)==5 &&(str3[1]==str4[1]&&str3[2]==str4[2]&&str3[3]==str4[3]&&str3[4]==str4[4])||
            (str3[0]==str4[0]&&str3[2]==str4[2]&&str3[3]==str4[3]&&str3[4]==str4[4])||
            (str3[1]==str4[1]&&str3[0]==str4[0]&&str3[3]==str4[3]&&str3[4]==str4[4])||
            (str3[1]==str4[1]&&str3[0]==str4[0]&&str3[2]==str4[2]&&str3[4]==str4[4])||
            (str3[1]==str4[1]&&str3[2]==str4[2]&&str3[3]==str4[3]&&str3[0]==str4[0]))
        printf("3\n");

        }
    return 0;
}
