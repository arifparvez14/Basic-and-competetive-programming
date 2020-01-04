#include<bits/stdc++.h>
using namespace std;

typedef struct
{
    char first[20];
    char last[20];
}nametype;

typedef struct
{
    int id;
    nametype name;
    char grade[3];
}studenttype;

void calculate_grade(studenttype* s, int mark)
{
    if(mark>=80)
        strcpy(s->grade,"A+");
    else if(mark>=70)
        strcpy(s->grade,"A");
    else if(mark>=60)
        strcpy(s->grade,"A-");
}

int main()
{
    studenttype s[3];
    int i, n=3;
    int marks[]={72,82,60};
    for(i=0;i<n;i++)
    {
        printf("Enter the ID for the student %d:",i+1);
        scanf("%d",&s[i].id);
        printf("Enter the first name for the student %d:",i+1);
        scanf("%s",s[i].name.first);
        printf("Enter the last name for the student %d:",i+1);
        scanf("%s",s[i].name.last);
        strcpy(s[i].grade,"");
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        calculate_grade(&s[i],marks[i]);
    }
    printf("Output: \n\n");
    for(i=0;i<n;i++)
    {
        printf("ID: %d\n",s[i].id);
        printf("Name: %s %s\n",s[i].name.first,s[i].name.last);
        printf("Grade: %s\n",s[i].grade);
    }
    return 0;
}
