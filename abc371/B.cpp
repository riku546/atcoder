#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> memory(N);
  vector<string> result = {};
  rep(i, 0, M)
  {
    int num;
    char gender;
    cin >> num >> gender;
    if (memory[num - 1] == 0 && gender == 'M')
    {
      result.push_back("Yes");
      memory[num - 1] = 1;
    }
    else
    {
      result.push_back("No");
    }
  }

  rep(i, 0, result.size()) cout << result[i] << endl;
}