#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  int n, q;
  cin >> n >> q;
  map<int, int> g;
  vector<int> cnt(n, 1);
  rep(i, 1, n + 1) g[i] = i;
  int ans = 0;
  rep(i, 0, q)
  {
    int query;
    cin >> query;
    if (query == 2)
    {
      cout << ans << endl;
    }
    else
    {
      int p, h;
      cin >> p >> h;
      if (g[p] != h)
      {
        if (cnt[h - 1] == 1)
        {
          ans++;
        }
        cnt[h - 1]++;
        if (cnt[g[p] - 1] == 2)
        {
          ans--;
        }
        cnt[g[p] - 1]--;
        g[p] = h;
      }
    }
  }
}