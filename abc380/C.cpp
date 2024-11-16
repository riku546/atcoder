#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main(){
  int n , k ;
  string s;
  cin >> n >> k >> s;
  int prev_one = -10;
  rep(i , 0 , n) {    
    if(i == 0 && s[i] == '1' && s[i + 1] == '0') {
      prev_one = 0;
      
    }
    int one_cnt = 0;
    if(s[i] == '1') {
      rep(j , i + 1 , n) {
        if(s[j] != '1' || j == n - 1) {
          if(j - i > 1 ) {
            if(prev_one == -10 ) prev_one = i;
            rep(m , i , j + 1) {
              
              swap(s[prev_one] , s[m]);

              prev_one++;
            }
            
          
          }
          i = j - 1;
          break;
        }
      }
    }
  }
  cout << s << endl;
}