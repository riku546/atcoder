#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
  int N;
  cin >> N;

  vector<int> L = {};
  vector<int> R = {};

  rep(i, N)
  {
    int A;
    char S;

    cin >> A >> S;
    if (S == 'R')
    {
      R.push_back(A);
    }
    else
    {
      L.push_back(A);
    }
  }

  int ans = 0;
  if (L.size() != 0)
  {

    rep(i, L.size() - 1)
    {
      ans += abs(L[i + 1] - L[i]);
    }
  }
  if (R.size() != 0)
  {
    rep(i, R.size() - 1)
    {
      ans += abs(R[i + 1] - R[i]);
    }
  }
  cout << ans << endl;
}