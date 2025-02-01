#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  vector<string> s(n);
  vector<string> t(m);
  rep(i, 0, n)
  {
    cin >> s[i];
  }
  rep(i, 0, m)
  {
    cin >> t[i];
  }

  rep(i, 0, n - m + 1)
  {
    rep(j, 0, n - m + 1)
    {
      vector<string> temp(m);
      bool flag = true;
      rep(k, 0, m)
      {
        rep(u, 0, m)
        {
        
          temp[k].push_back(s[i + k][j + u]);
        }
      }

      rep(w, 0, m)
      {
        
        if (t[w] != temp[w])
          flag = false;
      }

      if (flag)
      {
        cout << i + 1 << ' ' << j + 1 << endl;
      }
    }
  }
}