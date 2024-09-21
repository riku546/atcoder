#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  string S;
  string ans = "";
  cin >> S;
  rep(i, 0, S.size())
  {
    if (S[i] != '.')
      ans += S[i];
  }

  cout << ans << endl;
}