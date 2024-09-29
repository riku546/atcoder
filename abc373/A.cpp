#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  int ans = 0;
  rep(i, 1, 13)
  {
    string s;
    cin >> s;
    if (s.size() == i)
      ans++;
  }

  cout << ans << endl;
}