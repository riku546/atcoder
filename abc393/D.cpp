#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  vector<pair<char, int>> rle;
  ll ans = 0;

  vector<int> position;
  rep(i, 0, n)
  {
    if (s[i] == '1')
      position.push_back(i);
  }

  if (position.size() == 1)
  {
    cout << 0 << endl;
    return 0;
  }

  int center = ceil((double)position.size() / 2.0);
  int left_one = center - 1 ;
  int right_one = position.size() - center ;

  rep(i, 0, center - 1)
  {
    ans += position[center - 1] - position[i] - left_one;
    left_one--;
  }

  for (size_t i = position.size() - 1; i > center - 1; i--)
  {

    ans += abs(position[center - 1] - position[i]) - right_one;
    right_one--;
  }

  cout << ans << endl;
}