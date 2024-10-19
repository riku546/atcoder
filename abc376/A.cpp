#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  int ans = 1;
  int n, c;
  cin >> n >> c;
  vector<int> t(n);
  rep(i, 0, n) cin >> t[i];
  int total = t[0];
  rep(i, 1, n)
  {
    
    if (t[i] - total >= c){
      ans++;
      total = t[i];
    }
  }

  cout << ans << endl;
}