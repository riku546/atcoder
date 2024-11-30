#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;



int main(){
  string s ;
  int n , d;
  cin >> n >> d >> s;
  int ans = 0;
  rep(i , 0 , n){
    if(s[i] == '.')ans++;
  }
  ans += d;
  cout << ans << endl;
}