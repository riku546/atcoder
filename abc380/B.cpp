#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main(){
  string s;
  cin >> s;
  vector<int>ans = {};
  int temp = 0;
  rep(i , 1 , s.size()) {
    
    if( s[i] == '|'){
      ans.push_back(temp);
      temp = 0;
    }else{
      
      temp++;
    }
  }

  rep(i , 0 , ans.size()) cout << ans[i] << ' ';
  cout << endl;

}