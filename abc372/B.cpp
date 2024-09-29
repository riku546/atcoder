#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int M;
  cin >> M;
  vector<int> a;
  for (int i = 10; i >= 0; i--)
  {
    int x = 1;
    rep(j, 0, i) x *= 3;
    while (M >= x)
    {
      M -= x;
      a.push_back(i);
    }
  }
  cout << a.size() << endl;
  for (auto var : a)
  {
    cout << var << ' ';
  }
  cout << endl;
}