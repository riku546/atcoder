#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  map<int, int> nums;
  set<int> temp;
  rep(i, 0, 4)
  {
    int num;
    cin >> num;
    temp.insert(num);
    nums[num]++;
  }

  if (nums.size() != 2)
  {
    cout << "No" << endl;
    return 0;
  }

  cout << "Yes" << endl;
}