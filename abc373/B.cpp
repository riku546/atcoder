#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  string S;
  cin >> S;
  vector<pair<char, int>> memory = {};
  rep(i, 0, 26)
  {
    memory.push_back(make_pair(S[i] , i+1));
  }
  sort(memory.begin(), memory.end());
  int ans = 0;
  rep(i , 0 , S.size() - 1){
    ans += abs(memory[i].second - memory[i + 1].second);
  }
  cout << ans << endl;
}