// #include <bits/stdc++.h>
// #define rep(i, m, n) for (int i = m; i < n; i++)
// using ll = long long;
// using ull = unsigned long long;
// using namespace std;

// int binary_search(vector<int> & a, int value)
// {
//   int right = a.size() - 1;
//   int left = -1;
//   while (right - left > 1)
//   {
//     int mid = (right + left) / 2;
//     if (value * 2 <= a[mid])
//       right = mid;
//     else
//       left = mid;
//   }

//   return right;
// }

// int main()
// {
//   int n;
//   cin >> n;
//   vector<int> a(n);
//   rep(i, 0, n) cin >> a[i];
//   ll ans = 0;
//   rep(i, 0, n)
//   {
//     int right = binary_search(a, a[i]);
//     if (a[i] * 2 > a[right])
//       break;
//     ans += (ll)n - right;
//   }

//   cout << ans << "\n";
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

  ll ans = 0;

  rep(i, 0, n)
  {

    auto result = lower_bound(a.begin(), a.end(), a[i] * 2);
    ans += n - (result - a.begin());
  }

  cout << ans << endl;
}