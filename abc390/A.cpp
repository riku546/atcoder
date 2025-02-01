#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ll = long long;
using ull = unsigned long long;
using namespace std;

int main()
{
  vector<int> nums(5);
  vector<int> correct = {1, 2, 3, 4, 5};
  rep(i, 0, 5) cin >> nums[i];
  rep(i, 0, 4)
  {
    bool flag = true;
    vector<int> temp_nums = nums;
    swap(temp_nums[i], temp_nums[i + 1]);
    
    rep(j , 0 , temp_nums.size()){
      if(temp_nums[j] != correct[j]) {
        flag = false;
        break;
      }
    }
      if(flag){
        cout << "Yes" << endl;
        return 0;
      }
  }
  cout << "No" << endl;
}