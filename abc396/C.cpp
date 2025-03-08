#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;

  vector<int> b;
  vector<int> w;

  rep(i, 0, n)
  {
    int temp;
    cin >> temp;
    if (temp > 0)
      b.push_back(temp);
  }
  rep(i, 0, m)
  {
    int temp;
    cin >> temp;
    if (temp > 0)
      w.push_back(temp);
  }

  ll b_total = reduce(b.begin(), b.end(), 0LL);
  sort(w.begin(), w.end());
  ll w_total = 0;
  rep(i, 0, b.size())
  {
    if (i >= w.size())
      break;
    w_total += w[i];
  }

  cout << b_total + w_total << endl;
}