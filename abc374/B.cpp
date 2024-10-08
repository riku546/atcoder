#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  string S, T;
  cin >> S >> T;

  if (S.size() == T.size())
  {
    rep(i, 0, S.size())
    {
      if (S[i] != T[i])
      {
        cout << i + 1 << endl;
        return 0;
      }
    }

    cout << 0 << endl;
    return 0;
  }
  else
  {
    rep(i, 0, min(S.size(), T.size()))
    {
      if (S[i] != T[i])
      {
        cout << i + 1 << endl;
        return 0;
      }
    }
    string temp = min(S, T);
    cout << temp.size() + 1 << endl;
    return 0;
  }
}