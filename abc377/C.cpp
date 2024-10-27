#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{

  vector<vector<ll>> di = {{2, 1}, {1, 2}, {-1, 2}, {-2, 1}, {-2, -1}, {-1, -2}, {1, -2}, {2, -1}};
  ll n, m;
  cin >> n >> m;

  set<pair<int, int>> temp;

  rep(i, 0, m)
  {
    ll a, b;
    cin >> a >> b;
    a--;
    b--;
    temp.insert(make_pair(a, b));
    for (auto var : di)
    {
      ll da = a + var[0];
      ll db = b + var[1];
      if (da < 0 || da >= n)
        continue;
      if (db < 0 || db >= n)
        continue;
      temp.insert(make_pair(da, db));
    }
  }
  ll ans = n * n - temp.size();
  cout << ans << endl;
}