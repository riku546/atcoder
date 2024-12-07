#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  int n;
  string s;
  cin >> n >> s;
  vector<pair<char, int>> rle;
  rep(i, 0, n)
  {
    if (rle.size() && rle.back().first == s[i])
      rle.back().second++;
    else
      rle.push_back(make_pair(s[i], 1));
  }
  int ans = 1;
  if (rle.size() < 3)
  {
    cout << ans << endl;
    return 0;
  }
  rep(i, 0, rle.size() - 2)
  {
    if (rle[i].first == '1' && rle[i + 1].first == '/' && rle[i + 1].second == 1 && rle[i + 2].first == '2')
    {
      int temp = min(rle[i].second, rle[i + 2].second) * 2 + 1;

      ans = max(ans, temp);
    }
  }

  cout << ans << endl;
}