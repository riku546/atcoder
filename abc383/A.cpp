#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<pair<int, int>> temp(n);
  vector<int> sa = {0};
  rep(i, 0, n) cin >> temp[i].first >> temp[i].second;
  int total = 0;
  rep(i, 1, n)
  {

    sa.push_back(temp[i].first - temp[i - 1].first);
  }
  rep(i, 0, n)
  {
    total = max(0 , total - sa[i]);
    total += temp[i].second;
  }
  cout << total << endl;
}