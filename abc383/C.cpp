#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

vector<vector<int>> di = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
set<pair<int, int>> ans;
int h, w, d;
void dfs(vector<vector<char>> grid, int i, int j, int cnt)
{
  if (cnt > d)
    return;

  for (auto var : di)
  {
    int temp_i = i;
    int temp_j = j;
    temp_i+= var[0];
    temp_j += var[1];
    if (i < 0 || i > h - 1)
      continue;
    if (j < 0 || j > w - 1)
      continue;
    if (grid[i][j] == '#')
      continue;
    ans.insert(make_pair(i, j));
    dfs(grid , temp_i , temp_j , cnt + 1);
  }
}

int main()
{
  cin >> h >> w >> d;
  vector<vector<char>> grid(h, vector<char>(w));
  rep(i, 0, h) rep(j, 0, w) cin >> grid[i][j];
  rep(i, 0, h)
  {
    rep(j, 0, w)
    {
      if (grid[i][j] == 'H')
      {

        ans.insert(make_pair(i, j));
        int cnt = 0;
        dfs(grid , i , j , cnt);
      }
    }
  }
  cout << ans.size() << endl;
}