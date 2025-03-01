#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, 0, n) cin >> a[i];

  rep(i, 0, n - 1)
  {
    if (a[i] >= a[i + 1])
    {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
}