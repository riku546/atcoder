#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  string s;
  cin >> s;
  if (s.size() % 2 != 0)
  {
    cout << "No" << endl;
    return 0;
  }

  for (int i = 1; i < s.size() / 2 + 1; i ++)
  {
    if (s[2 * i - 2] != s[2 * i - 1])
    {
      cout << "No" << endl;
      return 0;
    }
  }

  map<char, int> temp;
  rep(i, 0, s.size()) temp[s[i]] += 1;
  for (auto var : temp)
  {
    if (var.second != 2)
    {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
}