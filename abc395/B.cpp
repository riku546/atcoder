#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<vector<char>> grid(n, vector<char>(n, '?'));

  rep(i, 1, n + 1)
  {
    int j = n + 1 - i;
    if (i > j)
      continue;
    char color = '#';
    if (i % 2 == 0)
      color = '.';

    rep(k, i - 1, j)
    {
      rep(m, i - 1, j)
      {
        grid[k][m] = color;
      }
    }
  }

  rep(i, 0, grid.size())
  {
    rep(j, 0, grid.size())
    {
      cout << grid[i][j];
    }
    cout << '\n';
  }
}

