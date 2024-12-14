#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  int n, r;
  cin >> n >> r;
  int ans = r;
  rep(i, 0, n)
  {
    int d, a;
    cin >> d >> a;
    if (d == 1 && ans >= 1600 && ans <= 2799)
      ans += a;
    else if (d == 2 && ans >= 1200 && ans <= 2399)ans+=a;
  }
  cout << ans << endl;
}