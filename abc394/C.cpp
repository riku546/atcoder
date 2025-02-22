#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  string s;
  cin >> s;
  string r_s = s;
  reverse(r_s.begin(), r_s.end());

  vector<string> temp;

  rep(i, 0, r_s.size())
  {
    if (r_s[i] == 'A' && i < r_s.size() - 1 && r_s[i + 1] == 'W')
    {
      if (i < r_s.size() - 2 && r_s[i + 2] == 'W')
      {
        rep(j, i + 2, r_s.size())
        {
          if (r_s[j] != 'W' || j == r_s.size() - 1)
          {
            temp.push_back('A' + string(j - i, 'C'));
            i += j - i + 1;
          }
        }
      }
      else
      {
        i ++;
        temp.push_back("AC");
      }
    }
    else
    {

      temp.push_back(string(1, r_s[i]));
    }
  }
  string ans = "";
  reverse(temp.begin(), temp.end());

  rep(i, 0, temp.size())
  {
    ans += temp[i];
  }

  cout << ans << endl;
}