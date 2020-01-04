#include <bits/stdc++.h>
#define ll long long int
#define str string
using namespace std;
int main() {
  ll testCase, caseCheck, value, i, marks;
  string name;
  map<str, ll> m;
  map<str, ll>::iterator it;
  cin >> testCase;
  for (i = 1; i <= testCase; i++) {
    cin >> caseCheck;
    switch (caseCheck) {
    case 1:
      cin >> name >> marks;
      if (m.find(name) == m.end())
        m.insert(make_pair(name, marks));
      else
        m[name] = m[name] + marks;
      break;
    case 2:
      cin >> name;
      m[name] = 0;
      break;

    case 3:
      cin >> name;
      cout << m[name] << endl;
      break;
    }
  }
  return 0;
}
