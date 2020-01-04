#include <bits/stdc++.h>
using namespace std;

vector <pair <int, int> > v;

int main (){
    freopen ("in.txt", "r", stdin);
    int n;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++){
        int f, s;
        scanf ("%d %d", &f, &s);
        v.push_back (make_pair (f, s));
    }

    for (int i = 0; i < n; i++)
        cout << v[i].first << " " << v[i].second << endl;
    printf ("\n");

    sort (v.begin(), v.begin() + 5);

    for (int i = 0; i < n; i++)
        cout << v[i].first << " " << v[i].second << endl;
    printf ("\n");
    return 0;
}

