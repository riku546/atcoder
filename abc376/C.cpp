#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

bool judge(vector<int> a, vector<int> b, int mid)
{
  
  vector<int> cb = b;
  cb.push_back(mid);
  sort(cb.begin(), cb.end());
  rep(i, 0, cb.size())
  {
    if (a[i] > cb[i])
      return false;
  }
  return true;
}

int binary(vector<int> a, vector<int> b)
{
  int r = 2e9, l = 0;
  while (r - l > 1)
  {
    int mid = l + (r - l) / 2;
    if (judge(a, b, mid))
      r = mid;
    else
      l = mid;
  }

  return r;
}

int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> b(n - 1);
  rep(i, 0, n) cin >> a[i];
  rep(i, 0, n - 1) cin >> b[i];
  sort(a.begin(), a.end());
  sort(b.begin(), b.begin());

  int inf = 2e9;
  if (!judge(a, b, inf))
  {
    cout << -1 << endl;
    return 0;
  }

  cout << binary(a, b) << endl;
}