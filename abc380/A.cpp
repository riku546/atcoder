#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  string n;
  cin >> n;
  int a = 0, b = 0, c = 0;
  rep(i, 0, n.size())
  {
    if (n[i] == '1')
      a++;
    else if (n[i] == '2')
      b++;
    else if (n[i] == '3')
      c++;
  }

  if(a== 1 && b == 2 && c == 3) {
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}