#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  string s;
  cin >> s;
  sort(s.begin(), s.end());
  if (s == "ABC")
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}