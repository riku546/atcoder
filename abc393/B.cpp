#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  string s;
  cin >> s;
  vector<int>a;
  vector<int>b;
  vector<int>c;

  rep(i , 0 , s.size()){
    if(s[i] == 'A') a.push_back(i + 1);
    else if(s[i] == 'B') b.push_back(i + 1);
    else if(s[i] == 'C') c.push_back(i + 1);
  }

  int ans = 0;

  rep(i , 0 , a.size()){
    rep(j , 0 , b.size()){
      rep(k , 0 , c.size()){
        if(a[i] > b[j] || b[j] > c[k]) continue;
        if(b[j] - a[i] == c[k] - b[j]) ans++;
      }
    }
  }

  cout << ans << endl;

}