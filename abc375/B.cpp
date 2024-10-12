#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

double calc(double s1 , double s2) {
  double temp = s1 - s2;
  return temp * temp;
}



int main()
{
  int n;
  cin >> n;
  double x1 = 0, y1 = 0;
  double x2 = 0, y2 = 0;
  double ans = 0;

  



  rep(i, 0, n)
  {
    cin >> x2 >> y2;
    ans += (double)sqrt(pow(x1 - x2 , 2) + pow(y1 - y2 , 2));
    
    x1 = x2, y1 = y2;
  }
  ans += (double)sqrt(pow(x2 - 0.0, 2.0) + pow(y2 - 0.0, 2.0));
  std::cout << std::fixed << std::setprecision(20);
  cout << ans << endl;
}