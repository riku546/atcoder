#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  int a1, a2, a3;
  cin >> a1 >> a2 >> a3;
  if (a1 == a2 * a3)
  {
    cout << "Yes" << endl;
    return 0;
  }
  else if (a2 == a1 * a3)
  {
    cout << "Yes" << endl;
    return 0;
  }
  else if (a3 == a1 * a2)
  {

    cout << "Yes" << endl;
    return 0;
  }
  else
  {
    cout << "No" << endl;
    return 0;
  }
}