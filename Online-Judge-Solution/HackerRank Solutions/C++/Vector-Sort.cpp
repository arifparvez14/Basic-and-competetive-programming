


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long int
using namespace std;

int main() {
  ll n, x, i;
  vector<ll> v;
  cin >> n;
  for (i = 0; i < n; i++) {
    int x;
    cin >> x;
    v.push_back(x);
  }
  sort(v.begin(), v.end());
  for (i = 0; i < n; i++) {
    cout << v[i] << " ";
  }
  return 0;
}
