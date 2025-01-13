#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  int n, d;
  cin >> n >> d;
  vector<pair<int, int>> tl(n);
  rep(i, 0, n)
  {
    int t, l;
    cin >> tl[i].first >> tl[i].second;
  }

  rep(k , 1 , d + 1){
    vector<int>heavy = {};
    rep(i , 0 , n) heavy.push_back(tl[i].first * (tl[i].second + k));
    sort(heavy.begin() , heavy.end());
    cout << heavy.back() << endl;
  }
}