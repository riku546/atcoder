#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  map<int, int> temp;
  int n;
  cin >> n;
  vector<int> temp2(n);
  vector<int> p(n);
  vector<int> q(n);
  rep(i, 0, n) cin >> p[i];
  rep(i, 0, n) { cin >> q[i]; }

  rep(i, 0, n)
  {
    temp[q[i]] = p[i];
  }

  rep(i, 1, n + 1)
  {
    
    cout << q[temp[i] - 1] << ' ';
    
  }
  cout << endl;
}