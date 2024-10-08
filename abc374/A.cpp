#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  string S;
  cin >> S;

  if (S.substr(S.size() - 3, 3) == "san")
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}