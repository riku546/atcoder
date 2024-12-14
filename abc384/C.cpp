#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  string name = "ABCDE";
  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;
  map<char, int> temp = {
      {'A', a},
      {'B', b},
      {'C', c},
      {'D', d},
      {'E', e}};

  vector<pair<int, string>> ans = {};

  rep(i, 0, 1 << name.size())
  {
    string nametemp = "";
    rep(j, 0, name.size())
    {
      if (i & (1 << j))
        nametemp.push_back(name[j]);
    }
    int num = 0;
    rep(k, 0, nametemp.size())
    {
      num += temp[nametemp[k]];
    }
    ans.push_back(make_pair(num, nametemp));
  }
  sort(ans.begin(), ans.end());
  reverse(ans.begin(), ans.end());

  vector<vector<string>> ans2;
  int point = ans[0].first;
  rep(i, 0, ans.size())
  {
    if (ans2.size() && point == ans[i].first)
      ans2.back().push_back(ans[i].second);
    else
    {
      point = ans[i].first;
      vector<string> names = {ans[i].second};
      ans2.push_back(names);
      
    }
  }

  rep(i, 0, ans2.size()) sort(ans2[i].begin(), ans2[i].end());

  rep(i, 0, ans2.size())
  {
    rep(j, 0, ans2[i].size()) cout << ans2[i][j] << endl;
  }
}