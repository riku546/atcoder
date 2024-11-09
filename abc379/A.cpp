#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  int n;
  cin >> n;
  string sn = to_string(n);
  char n0 = sn[0];
  char n1 = sn[1];
  char n2 = sn[2];
  
  
  cout << n1 << n2 << n0 << ' ' << n2 << n0 << n1 << endl;
}