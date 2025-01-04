#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  int x;
  cin >> x;

  vector<int> temp;
  rep(i, 1, 10) rep(j, 1, 10)
  {
    if((i * j) == x)continue;
    temp.push_back(i * j);
  }

  cout << reduce(temp.begin() , temp.end()) << endl;
  


}