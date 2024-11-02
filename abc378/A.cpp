#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  map<int , int>temp;
  rep(i , 0 , 4) {
    int x;
    cin >> x;
    temp[x] ++;
  }
  int ans = 0;
  for(auto var : temp)
  {
    
    ans += var.second / 2;
  }
  cout << ans << endl;
}