#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<pair<int, string>> temp(n);
  string ans = "";

  rep(i, 0, n)
  {
    string s;
    cin >> s;
    temp[i] = (make_pair(s.size(), s));
  }

  sort(temp.begin(), temp.end());

  rep(i, 0, n)
  {
    ans += temp[i].second;
  }

  cout << ans << endl;
}