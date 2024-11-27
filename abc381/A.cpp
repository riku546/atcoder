#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  int n;
  string s;
  cin >> n >> s;
  if (s == "/")
  {
    cout << "Yes" << endl;
    return 0;
  }

  if (n % 2 == 0)
  {
    cout << "No" << endl;
    return 0;
  }

  string front = s.substr(0, ((n + 1) / 2) - 1);
  string back = s.substr(((n + 1) / 2) , n - (((n + 1) / 2) + 1) + 1);
  string front2 = string(((n + 1) / 2) - 1, '1');
  string back2 = string(n - (((n + 1) / 2) + 1) + 1, '2');

  if (front == front2 && back == back2 && s[((n + 1) / 2) - 1] == '/')
  {
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}