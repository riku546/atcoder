#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  int n;
  string s;
  char c1 , c2;
  cin >> n >> c1 >> c2 >> s;

  string ans = "";
  rep(i , 0 , n){
    if(s[i] != c1) ans.push_back(c2);
    else ans.push_back(c1);
  }

  cout << ans << endl;
}