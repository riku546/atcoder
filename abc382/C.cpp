#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int binary_search(vector<pair<int, int>> a, int value)
{
  int left = -1;
  int right = a.size() -1;

  while (right - left > 1)
  {
    int mid = (left + right) / 2;
    if(a[mid].first >= value) right = mid;
    else left = mid;
  }

  return right;
}



int main()
{
  int n, m;
  cin >> n >> m;
  vector<pair<int, int>> a(n);
  vector<int> b(m);
  rep(i, 0, n)
  {
    int temp;
    cin >> temp;
    a[i].first = temp;
    a[i].second = i;
  }
  rep(i, 0, m) cin >> b[i];
  sort(a.begin(), a.end());
  vector<int> ans;
  rep(i, 0, m)
  {
    int result = binary_search(a, b[i]);
    ans.push_back(result);
  }

  rep(i, 0, ans.size())
  {
    if (ans[i] == -1)
      cout << -1 << endl;
    else
      cout << a[ans[i]].second + 1 << endl;
  }
}