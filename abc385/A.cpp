#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  vector<int> nums(3);
  rep(i, 0, 3) cin >> nums[i];

  if (nums[0] == nums[1] && nums[1] == nums[2])
  {
    cout << "Yes" << endl;
    return 0;
  }

  rep(i, 0, 3)
  {
    int temp = 0;
    rep(j, 0, 3)
    {
      if (i == j)
        continue;
      temp += nums[j];
    }
    if (temp == nums[i])
    {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
}