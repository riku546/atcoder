#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  int n, k;
  string s;
  cin >> n >> k >> s;
  int ans = 0;
  rep(i, 0, n - k + 1)
  {
    bool flag = true;
    rep(j, 0, k)
    {

      if (s[i + j] != 'O'){
        flag = false;
        break;
      }
    }
    if (flag){
      
      ans++;
      i += k - 1;
    }
  }
  cout << ans << endl;
}