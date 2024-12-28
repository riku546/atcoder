#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  string s;
  cin >> s;

  int zero = 0;
  vector<int> zerotemp = {};
  int temp = 0;
  rep(i, 0, s.size())
  {
    if (s[i] == '0')
    {
      temp++;
    }
    else
    {
      zerotemp.push_back(temp);
      temp = 0;
    }
  }
  if (temp != 0)
  {
    zerotemp.push_back(temp);
  }
  if (zerotemp.size() == 0)
  {
    cout << s.size() << endl;
    return 0;
  }

  

  int ans = s.size() - reduce(zerotemp.begin(), zerotemp.end());
  
  rep(i, 0, zerotemp.size())
  {
    ans += zerotemp[i] / 2;
    ans += zerotemp[i] % 2;
  }
  cout << ans << endl;
}