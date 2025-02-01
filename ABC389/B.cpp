#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main(){
  ull num = 1;
  ull x;
  cin >> x;

  rep(i , 2 , 1e7){
    num *= i;
    if(num == x) {
      cout << i << endl;
      return 0;
    }
  }
}