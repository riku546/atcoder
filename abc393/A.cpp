#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  string s1 , s2;
  cin >> s1 >> s2;

  if(s1 == "sick" && s2 == "sick"){
    cout << 1 << endl;
    
  }else if(s2 == "fine" && s1 == "fine"){
    cout << 4 << endl;
  }
  else if(s1 == "sick" && s2 == "fine"){
    cout << 2 << endl;
  }else if(s1 == "fine" && s2 == "sick"){
    cout << 3 << endl;
  }
}