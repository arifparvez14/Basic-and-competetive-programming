#include<iostream>
#include<string>
#include<cctype>
#include<stdbool.h>
using namespace std;
int main()
{
    string word;
    //cout<<"enter the word"<<endl;
    //cin>>word;
    for(int i=0; i<word.length(); i++)
    {
        word[i] = tolower(word[i]);
        if(word[i]!='a'&& word[i]!='e'&& word[i]!='i'&& word[i]!='o'&& word[i]!='u')
        {
            cout<<'.'<<word[i];
        }
    }


    return 0;
}
