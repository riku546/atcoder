#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  int M;
  cin >> M;
  vector<int> ans = {};
  int num = 0;
  rep(i, 0, 20)
  {
    int index = 0;

    while (true)
    {
      if (M - pow(3, index + 1) > 0)
        index++;
      if (index + 1 > 10)
        break;
      else if (M - pow(3, index + 1) <= 0)
        break;
    }

    M -= pow(3, index);
    ans.push_back(index);
    if (M <= 0)
      break;
  }

  cout << ans.size() << endl;
  for (auto var : ans)
  {

    cout << var << ' ';
    num += pow(3, var);
  }
  cout << endl;
  cout << num;
}