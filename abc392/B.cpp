#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main(){
  int n , m;cin >> n >> m;
  set<int>temp;
  rep(i , 0 , m){
    int a;
    cin >> a;
    temp.insert(a);
  }

  vector<int>ans;
  rep(i , 1 , n + 1){
    if(temp.count(i))continue;
    ans.push_back(i);
  }
  cout << ans.size() << endl;
  rep(i , 0 , ans.size()) cout << ans[i] << ' ';
  cout << endl;
}