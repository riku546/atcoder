#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  set<pair<int, int>> temp;

  int ans = 0;

  rep(i, 0, m)
  {
    int u1, u2;
    cin >> u1 >> u2;

    if (u1 == u2)
    {
      ans++;
    }
    else if (temp.count(make_pair(u1, u2)) || temp.count(make_pair(u2, u1)))
      ans++;

    temp.insert(make_pair(u1, u2));
    temp.insert(make_pair(u2, u1));
  }

  cout << ans << endl;
}