#include<bits/stdc++.h>
using namespace std;

struct student
{
    int id;
    char name[40];
    string s;
};
int main()
{
    struct student one;
    scanf("%d",&one.id);
    scanf("%s",one.name);
    cin>>one.s;

    printf("ID: %d\n",one.id);
    printf("Name: %s\n",one.name);
    cout<<one.s;

    return 0;
}

