#include<bits/stdc++.h>
using namespace std;

list<int>l;
list<int>::iterator i;

void print()
{
    for(i=l.begin(); i!=l.end(); i++)
        printf("%d",*i);
    printf("\n");
}

int main()
{

    l.push_back(10);
    l.push_back(3);
    l.push_back(5);
    l.push_back(7);
    l.push_back(99);
    l.push_back(27);
    print();

    l.sort();
    print();

    l.remove(3);
    print();

    l.unique();
    print();

    i=l.begin();
    i++;
    l.insert(i,1,10);
    print();

    return 0;
}
