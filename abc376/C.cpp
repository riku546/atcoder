// #include <bits/stdc++.h>
// #define rep(i, m, n) for (int i = m; i < n; i++)
// using ll = long long;
// using ull = unsigned long long;
// using namespace std;

// bool judge(vector<int> a, vector<int> b, int mid)
// {

//   vector<int> cb = b;
//   cb.push_back(mid);
//   sort(cb.begin(), cb.end());
//   rep(i, 0, cb.size())
//   {
//     if (a[i] > cb[i])
//       return false;
//   }
//   return true;
// }

// int binary(vector<int> a, vector<int> b)
// {
//   int r = 2e9, l = 0;
//   while (r - l > 1)
//   {
//     int mid = l + (r - l) / 2;
//     if (judge(a, b, mid))
//       r = mid;
//     else
//       l = mid;
//   }

//   return r;
// }

// int main()
// {
//   int n;
//   cin >> n;
//   vector<int> a(n);
//   vector<int> b(n - 1);
//   rep(i, 0, n) cin >> a[i];
//   rep(i, 0, n - 1) cin >> b[i];
//   sort(a.begin(), a.end());
//   sort(b.begin(), b.begin());

//   int inf = 2e9;
//   if (!judge(a, b, inf))
//   {
//     cout << -1 << endl;
//     return 0;
//   }

//   cout << binary(a, b) << endl;
// }

#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

bool isOk(vector<int> a, vector<int> b)
{
  rep(i, 0, a.size())
  {
    if (a[i] > b[i])
      return false;
  }
  return true;
}

int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> b(n -1);
  rep(i, 0, n) cin >> a[i];
  rep(i, 0, n - 1) cin >> b[i];
  sort(a.begin(), a.end());
  int max_value = 2e9;
  vector<int> cb = b;
  cb.push_back(max_value);
  sort(cb.begin(), cb.end());
  if (!isOk(a, cb))
  {
    cout << -1 << endl;
    return 0;
  }

  auto binary_sarch = [&]
  {
    int left = 0;
    int right = 1e9;

    while (right - left > 1)
    {
      int mid = (right + left) / 2;
      vector<int> cb = b;
      cb.push_back(mid);
      sort(cb.begin(), cb.end());
      if (isOk(a, cb))
        right = mid;
      else
        left = mid;
    }
    return right;
  };

  cout <<  binary_sarch() << endl;
  
}