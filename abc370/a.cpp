#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int L, R;
  cin >> L >> R;

  if (L == 1 && R == 0)
    cout << "Yes" << endl;
  else if (L == 0 && R == 1)
    cout << "No" << endl;
  else
    cout << "Invalid" << endl;
}