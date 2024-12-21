#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  set<pair<int, int>> ans;
  int h, w, x, y;
  string t;
  cin >> h >> w >> x >> y;
  x--;
  y--;
  vector<vector<char>> grid(h, vector<char>(w));
  rep(i, 0, h) rep(j, 0, w) cin >> grid[i][j];
  cin >> t;
  if (grid[x][y] == '@')
  {
    ans.insert(make_pair(y, x));
  }
  rep(i, 0, t.size())
  {
    if (t[i] == 'U')
    {
      if (x - 1 < 0 && x - 1 > h)
        continue;
      if (grid[x - 1][y] == '#')
        continue;
      x--;
      if (grid[x][y] == '@')
        ans.insert(make_pair(y, x));
    }
    else if (t[i] == 'D')
    {
      if (x + 1 < 0 && x + 1 > h)
        continue;
      if (grid[x + 1][y] == '#')
        continue;
      x++;
      if (grid[x][y] == '@')
        ans.insert(make_pair(y, x));
    }
    if (t[i] == 'L')
    {
      if (y - 1 < 0 && y - 1 > w)
        continue;
      if (grid[x][y - 1] == '#')
        continue;
      y--;
      if (grid[x][y] == '@')
        ans.insert(make_pair(y, x));
    }
    if (t[i] == 'R')
    {
      if (y + 1 < 0 && y + 1 > w)
        continue;
      if (grid[x][y + 1] == '#')
        continue;
      y++;
      if (grid[x][y] == '@')
        ans.insert(make_pair(y, x));
    }
  }

  cout << x + 1 << ' ' << y + 1 << ' ' << ans.size() << endl;
}