#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main(){
  int n , d;string s;
  cin >> n >> d >> s;

  int ans = 0;
  vector<int>cookie;
  for (int i = n - 1; i > -1; i--)
  {
    if(s[i] == '.') ans++;
    else cookie.push_back(i);
  }

  rep(i , 0 , d){
    s[cookie[i]] = '.';
  }

  cout << s << endl;
  
}