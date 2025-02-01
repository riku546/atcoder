#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  map<string, string> di;
  di["N"] = "S";
  di["E"] = "W";
  di["W"] = "E";
  di["S"] = "N";
  di["NE"] = "SW";
  di["NW"] = "SE";
  di["SE"] = "NW";
  di["SW"] = "NE";
  string d;
  cin >> d;
  cout << di[d] << endl;
}