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
  int one_cnt = 0;
  int prev_one = -10;
  rep(i, 0, n)
  {
  

    if (s[i] == '1')
    {      
  
      one_cnt++;      
      if(one_cnt == k){
        prev_one++;
        
        rep(j , i + 1 , n){
          if(s[j] == '0' || j == n - 1) {
            rep(m , i , j ){

              swap(s[m] , s[prev_one]);
              
              prev_one++;
            }
            break;
          }
        }
        break;
      }


      rep(j, i + 1, n)
      {
        if (s[j] == '1')
          prev_one = j;
        else
        {
          i = j - 1;
          break;
        }
      }
    }
  }
  cout << s << endl;

}