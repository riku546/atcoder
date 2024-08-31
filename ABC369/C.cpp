#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
  long long B;
  cin >> B;
  long long A = 1;
  while (pow(A, A) <= B)
  {
    if (pow(A, A) == B)
    {
      cout << A << endl;
      return 0;
    }
    A++;
  }

  cout << -1 << endl;
}