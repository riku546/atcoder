#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  char ab, ac, bc;
  cin >> ab >> ac >> bc;

  if (ab == ac && ac == bc)
  {
    cout << 'B' << endl;
  }
  else if (ab == '<')
  {
    if (ac == '<')
    {
      if (bc == '>')
      {
        cout << 'C' << endl;
      }
    }

    else
    {
      if (bc == '>')
        cout << 'A' << endl;

    }
  }
  else if (ab == '>')
  {
    if (ac == '<')
    {
      if (bc == '<')
      {
        cout << 'A' << endl;
      }
    }
    else
    {
      if (bc == '<')
      {
        cout << 'C' << endl;
      }
    }
  }
}