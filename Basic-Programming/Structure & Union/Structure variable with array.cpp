#include<bits/stdc++.h>
using namespace std;

struct nametype{
    char first[20];
    char last[20];
};

struct student{
    int id;
    struct nametype name;
};

int main()
{
    struct student s[5];
    int i,n=2;
    for(i=0;i<n;i++)
    {
        printf("Enter the ID for the student %d:",i+1);
        scanf("%d",&s[i].id);
        printf("Enter the first name for the student %d:",i+1);
        scanf("%s",s[i].name.first);
        printf("Enter the last name for the student %d:",i+1);
        scanf("%s",s[i].name.last);
        printf("\n");
    }

    printf("Output: \n\n");
    for(i=0;i<n;i++){
        printf("ID: %d\n",s[i].id);
        printf("Name: %s %s\n",s[i].name.first,s[i].name.last);
    }
    return 0;
}

