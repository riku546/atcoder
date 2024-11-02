#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<pair<int, int>> qr(n);
  rep(i, 0, n) cin >> qr[i].first >> qr[i].second;
  int q;
  cin >> q;

  vector<pair<int, int>> td(q);
  rep(i, 0, q) cin >> td[i].first >> td[i].second;

  vector<ll> ans = {};
  rep(i, 0, q)
  {
    rep(j, 0, 10000)
    {
      ll x = (ll)qr[td[i].first - 1].second + j * qr[td[i].first - 1].first;
      if (x >= td[i].second)
      {
        cout << x << endl;
        break;
      }
    }
  }

}