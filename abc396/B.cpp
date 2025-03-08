#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  int q;
  cin >> q;

  stack<int> s;

  rep(i, 0, q)
  {
    int q1;
    cin >> q1;

    if (q1 == 1)
    {
      int x;
      cin >> x;
      s.push(x);
    }
    else if (q1 == 2)
    {
      if (s.size() == 0)
      {
        cout << 0 << endl;
      }
      else
      {
        int temp = s.top();
        s.pop();
        cout << temp << endl;
      }
    }
  }
}