#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  double x;
  cin >> x;

  if (x >= 38.0)
  {
    cout << 1 << endl;
  }
  else if (x < 37.5)
  {
    cout << 3 << endl;
  }
  else
  {
    cout << 2 << endl;
  }
}