#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  int q;
  cin >> q;
  ll d = 0;
  ll p = 0;
  vector<ll> nums = {0};
  rep(i, 0, q)
  {
    int q1;
    cin >> q1;
    if (q1 == 1)
    {
      ll l;
      cin >> l;
      if (nums.size())
        nums.push_back(nums.back() + l);
    }
    else if (q1 == 2)
    {
      p++;

      d += nums[p] - d;
    }
    else if (q1 == 3)
    {
      ll k;
      cin >> k;
      if (k == 1)
      {
        cout << 0 << endl;
      }
      else
      {

        cout << nums[k + p - 1] - d << endl;
      }
    }
  }
}