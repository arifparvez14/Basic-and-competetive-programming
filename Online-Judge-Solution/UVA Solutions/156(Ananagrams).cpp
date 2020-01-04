#include <bits/stdc++.h>
#define fileread freopen("in.txt","r",stdin)
#define filewrite freopen("out.txt","w",stdout)
#define ll long long int
#define FOR(i,n) for(int i=0;i<n;i++)
#define vll vector<ll>
#define msll map<string, ll>
#define pb push_back
using namespace std;
int main()
{

    map <string, pair<string, int> > words;
    vector<string> result;
    string word,wordSorted;
    cin>>word;
    while(word != "#")
    {
        wordSorted=word;
        transform(wordSorted.begin(), wordSorted.end(),wordSorted.begin(),::toupper);
        sort(wordSorted.begin(),wordSorted.end());
        words[wordSorted].first = word;
        words[wordSorted].second++;
        cin>>word;
    }
    map <string, pair<string, int> >:: iterator itr;
    for(itr = words.begin(); itr != words.end(); itr++)
    {
        if((*itr).second.second == 1)
            result.push_back((*itr).second.first);
    }
    sort(result.begin(),result.end());
    int total = result.size();
     for (int i = 0; i < total; ++i)
    {
        cout<<result[i]<<endl;
    }
    return 0;
}


