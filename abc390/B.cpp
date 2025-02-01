#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<ll>a(n);
  rep(i , 0 , n) cin >> a[i];
  double b = a[1] / a[0];
  ll total = a.front();
  ll prev = a.front();
  rep(i , 0 , n - 1){
    total += b * prev;
    prev = b * prev;
  }

  ll total2 = 0;
  rep(i , 0 , n) total2 += a[i];
  if(total2 == total ){
    cout << "Yes" << endl;

  } else{
    cout << "No" << endl;
  }
}