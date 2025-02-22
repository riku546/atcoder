#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  string s;
  cin >> s;
  string ans;
  rep(i, 0, s.size()) if (s[i] == '2') ans.push_back('2');
  cout << ans << endl;
}