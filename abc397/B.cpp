#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  string s;
  cin >> s;
  int ans = 0;
  int extend = 0;
  rep(i, 0, s.size())
  {
    if ((i + 1 + extend) % 2 == 0 && s[i] == 'i')
    {
      ans++;
      extend++;
    }
    else if ((i + 1 + extend) % 2 != 0 && s[i] == 'o')
    {
      ans++;
      extend++;
    }
  }

  if (s.back() == 'i')
    ans++;

  cout << ans << endl;
}