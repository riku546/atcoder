#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

vector<vector<int>> ans = {};

void dfs(vector<int> temp, int n, int first_max)
{
  if (temp.size() == n)
  {
    ans.push_back(temp);
    return;
  }
  rep(i, 1 + ((temp.size()) * 10), first_max + ((temp.size()) * 10) + 1)
  {
    if(temp.size() && temp.back()  + 10  > i) continue;
    temp.push_back(i);
    dfs(temp, n, first_max);
    temp.pop_back();
  }
}

int main()
{
  int n, m;
  cin >> n >> m;
  int first_max = m - ((n - 1) * 10);
  vector<int> temp = {};
  dfs(temp, n, first_max);
  cout << ans.size() << endl;
  rep(i, 0, ans.size())
  {
    rep(j, 0, ans[i].size())
    {
      cout << ans[i][j] << ' ';
    }
    cout << endl;
  }
}