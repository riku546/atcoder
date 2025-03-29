#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<pair<int, int>> p(n);
  rep(i, 0, n)
  {
    int temp;
    cin >> temp;
    p[i] = make_pair(temp, i);
  }

  sort(p.begin(), p.end());
  reverse(p.begin(), p.end());

  int temp_p = p[0].first;
  int r = 1;
  p[0].first = p[0].second;
  p[0].second = r;

  int s = 0;

  rep(i, 1, n)
  {
    if (temp_p == p[i].first)
    {
      p[i].first = p[i].second;
      p[i].second = r;
      s++;
    }
    else
    {
      if (s >= 1)
      {
        r += s;
        r++;
      }
      else
        r++;

      s = 0;
      temp_p = p[i].first;
      p[i].first = p[i].second;
      p[i].second = r;
    }
  }

  sort(p.begin(), p.end());

  rep(i, 0, p.size())
  {
    cout << p[i].second << endl;
  }
}