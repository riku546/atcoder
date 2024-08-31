#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
  int A, B;
  cin >> A >> B;

  int temp = abs(A - B);
  int lareger = max(A, B);
  int smaller = min(A, B);

  set<int> result;
  result.insert(lareger + temp);
  result.insert(smaller - temp);
  if ((A + B) % 2 == 0)
    result.insert((A + B) / 2);
  cout << result.size() << endl;
}