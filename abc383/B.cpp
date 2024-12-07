#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main(){
  int h , w ,  d;
  cin >> h >> w >> d;
  vector<vector<char>>grid(h , vector<char>(w));
  rep(i , 0 , h) rep(j , 0 , w) cin >> grid[i][j];
  int ans = 2;
  rep(i , 0 , h){
    rep(j , 0 , w){
      if(grid[i][j] == '#') continue;
      rep(k , 0 , h) {
        rep(m , 0 , w){
          if(i == k && j == m) continue;
          if(grid[k][m] == '#') continue;
          
          
          set<pair<int , int>>temp2;
          temp2.insert(make_pair(i , j));
          temp2.insert(make_pair(k , m));
          rep(u , 0 , h) {
            rep(t , 0 , w){

              if(grid[u][t] == '#') continue;
              if((i != u || j != t )&&(abs(i  - u) + abs(j - t)) <= d)temp2.insert(make_pair(u , t));
              if((k != u || m != t) && (abs(k - u) + abs(m - t)) <= d)temp2.insert(make_pair(u , t));
            }
          }
          ans = max(ans  , (int)temp2.size());
        }

      }
    }
  }
  cout << ans << endl;
}