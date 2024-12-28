#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  int k;
  cin >> k;
  string s, t;
  cin >> s >> t;

  if (s == t)
  {
    cout << "Yes" << endl;
    return 0;
  }

  if (s.size() == t.size())
  {
    int miss = 0;
    rep(i, 0, s.size())
    {
      if (s[i] != t[i])
        miss++;
    }
    if (miss == 1)
    {
      cout << "Yes" << endl;
      return 0;
    }
  }
  else if (t.size() - s.size() == 1)
  {
    bool flag = true;
    rep(i, 0, s.size())
    {
      if (s[i] != t[i])
      {
        flag = false;
        string s1 = s.substr(i, s.size() - i);
        string s2 = t.substr(i + 1, t.size() - i + 1);

        if (s2 == s1)
        {
          cout << "Yes" << endl;
          return 0;
        }else{
          cout << "No" << endl;
          return 0;
        }
      }
    }
    if (flag)
    {
      cout << "Yes" << endl;
      return 0;
    }
  }
  else if (s.size() - t.size() == 1)
  {
    bool flag = true;
    rep(i, 0, t.size())
    {
      if (s[i] != t[i])
      {
        flag = false;
        string s1 = s.substr(i + 1, s.size() - i + 1);
        string s2 = t.substr(i, t.size() - i);
        
        if (s2 == s1)
        {
          cout << "Yes" << endl;
          return 0;
        }else{
          cout << "No" << endl;
          return 0;
        }
      }
    }
    if (flag)
    {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
}