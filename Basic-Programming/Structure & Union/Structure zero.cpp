#include<bits/stdc++.h>
using namespace std;
int main()
{
    struct student{
    int id;
    //char* name;
    char name[40];
    };

    struct student one;
    one.id=1;
    strcpy(one.name,"Arif");

    printf("ID: %d\n",one.id);
    printf("Name: %s\n",one.name);

    return 0;
}
