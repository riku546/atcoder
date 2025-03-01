// #include <bits/stdc++.h>
// #define rep(i, m, n) for (int i = m; i < n; i++)
// using ll = long long;
// using ull = unsigned long long;
// using namespace std;

// int main()
// {
//   int n;
//   cin >> n;
//   vector<int> a(n);
//   rep(i, 0, n) cin >> a[i];

//   map<int, int> temp;

//   int ans = 2e9;
//   int right = 1;
//   rep(left, 0, n)
//   {
//     temp[a[left]]++;

//     if (right == left)
//     {

//       right++;
//       temp[a[left]]--;
//       continue;
//     }

//     while (right < n && temp[a[right]] + 1 < 2)
//     {
//       right++;
//     }

//     if (temp[a[right]] >= 1)
//       ans = min(ans, right - left + 1);

//     temp[a[left]]--;
//   }

//   if (ans == 2e9)
//   {
//     cout << -1 << endl;
//   }
//   else
//   {
//     cout << ans << endl;
//   }
// }

#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<int> a(n);
  rep(i, 0, n) cin >> a[i];

  map<int, pair<int, int>> temp;
  int ans = 2e9;

  rep(i, 0, n)
  {
    if (temp[a[i]].second == -1)
      continue;
    temp[a[i]].first++;

    if (temp[a[i]].first == 2)
    {
      ans = min(ans, i - temp[a[i]].second + 1);
      temp[a[i]].second = -1;
    }

    temp[a[i]].second = i;
  }

  if (ans == 2e9)
  {
    cout << -1 << endl;
  }
  else
  {

    cout << ans << endl;
  }
}
