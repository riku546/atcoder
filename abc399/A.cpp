#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  int n;
  string s, t;
  cin >> n >> s >> t;

  int ans = 0;

  rep(i, 0, n)
  {
    if (s[i] != t[i])
      ans++;
  }

  cout << ans << endl;
}