#include <bits/stdc++.h>
#define rep(i, m, n) for (int i = m; i < n; i++)
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main()
{
    string S, T;
    cin >> S >> T;

    vector<string> X;
    while (S != T)
    {
        string best(S.size(), 'z');
        rep(i, 0, S.size())
        {
            string ns = S;
            if (S[i] != T[i])
            {
                ns[i] = T[i];
                best = min(best, ns);
            }
        }
        S = best;
        X.push_back(S);
    }

    cout << X.size() << endl;
    for (auto x : X)
    {
        cout << x << endl;
    }
    return 0;
}
