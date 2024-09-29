#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  int N;
  cin >> N;

  ll max_a = -1e9, max_b = -1e9;
  rep(i, 0, N)
  {
    ll temp;
    cin >> temp;
    max_a = max(max_a, temp);
  }

  rep(i, 0, N)
  {
    ll temp;
    cin >> temp;
    max_b = max(max_b, temp);
  }

  cout << max_a + max_b << endl;
}