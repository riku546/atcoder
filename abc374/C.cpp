#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> K(N);
  rep(i, 0, N) cin >> K[i];

  ll ans = 1e15;

  rep(i, 0, 1 << N)
  {
    ll a = 0, b = 0;

    vector<int> temp = {};
    rep(j, 0, N)
    {
      if (i & (1 << j))
        temp.push_back(j);
    }

    rep(f, 0, N)
    {
      if (count(temp.begin(), temp.end(), f))
        a += (ll)K[f];
      else
        b += (ll)K[f];
    }
    ans = min(ans, max(a, b));
  }
  cout << ans << endl;
}