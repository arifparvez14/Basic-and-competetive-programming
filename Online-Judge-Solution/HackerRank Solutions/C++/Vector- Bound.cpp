#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
  ll ve, i, tc, val;
  cin >> ve;
  vector<ll> v(ve);
  for (i = 0; i < ve; i++) {
    cin >> v[i];
  }
  cin >> tc;
  for (i = 1; i <= tc; i++) {
    cin >> val;
    vector<ll>::iterator low = lower_bound(v.begin(), v.end(), val);
    if (v[low - v.begin()] == val)
      cout << "Yes " << (low - v.begin() + 1) << endl;
    else
      cout << "No " << (low - v.begin() + 1) << endl;
  }
  return 0;
