#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main(){
  int n; cin >> n;
  map<int , int> temp;
  vector<int>ans = {};
  rep(i , 0 , n) {
    int x;
    cin >> x;
    if(!temp[x]){
      ans.push_back(-1);      
    }else{
      ans.push_back(temp[x]);
    }
    temp[x] = i + 1;
  }
  rep(i , 0 , ans.size()) cout << ans[i] << ' ';
  cout << endl;
}