#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  int n;
  string s;
  cin >> n >> s;
  int ans = 0;
  rep(i, 0, n - 2)
  {
    if (s[i] == '#' && s[i + 2] == '#' && s[i + 1] == '.')
      ans++;
  }

  cout << ans << endl;
}