#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  vector<string> board(8);
  rep(i, 0, 8)
  {
    cin >> board[i];
  }
  vector<int>column(8);
  vector<int>row(8);

  rep(i , 0 , 8) {
    rep(j , 0 , 8) {
      if(board[i][j] == '#'){
        row[i] = 1;
        column[j] = 1;
      }
    }
  }

  int ans = 0;
  rep(i , 0 , 8){
    rep(j , 0 , 8) {
      if(!row[i] && !column[j]) ans++;
    }
  }
  cout << ans << endl;
}