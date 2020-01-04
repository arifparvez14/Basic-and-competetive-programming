#include <stdio.h>

struct student
    {
        char name[30];
        int roll,mark;
    };
int main()
    {
        struct student a;
        printf("Name:");
        scanf("%s",a.name);
        printf("Roll:");
        scanf("%d",&a.roll);
        printf("Mark:");
        scanf("%d",&a.mark);

        printf("\nName: %s  \nRoll: %d  \nMark:%d",a.name,a.roll,a.mark);
    }

