#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  ll ans = 0;
  vector<vector<ll>> di = {{2, 1}, {1, 2}, {-1, 2}, {-2, 1}, {-2, -1}, {-1, -2}, {1, -2}, {2, -1}};
  ll n, m;
  cin >> n >> m;
  vector<vector<int>> bit(n, vector<int>(n));

  vector<pair<int, int>> temp(m);
  rep(i, 0, m)
  {
    ll a, b;
    cin >> a >> b;
    a--;
    b--;
    bit[a][b] = 1;
    temp[i].first = a;
    temp[i].second = b;
  }

  rep(i, 0, m)
  {
    int a = temp[i].first;
    int b = temp[i].second;

    for (auto var : di)
    {
      ll da = a + var[0];
      ll db = b + var[1];
      if (da < 0 || da >= n)
        continue;
      if (db < 0 || db >= n)
        continue;
      if (bit[da][db])
        continue;
      ans++;

      bit[da][db] = 1;
    }
  }
  ans = n * n - ans;
  cout << ans - m << endl;
}