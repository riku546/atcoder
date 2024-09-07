#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<vector<int>> A(N);
  rep(i, 0, N) rep(j, 0, i + 1)
  {
    int temp;

    cin >> temp;
    A[i].push_back(temp);
  }
  int temp = 1;
  rep(i, 1, N + 1)
  {
    if (temp >= i)
    {

      temp = A[temp - 1][i - 1];
    }
    else
    {
      temp = A[i - 1][temp - 1];
    }

    
  }

  cout << temp << endl;
}