#include <bits/stdc++.h>
using namespace std;
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using ll = long long;
using ld = long double;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
using vvi = vector<vi>;
using vvll = vector<vll>;

void solve() {
    int N;
        cin >> N;
        int odd = 0, even = 0, x;
        for (int i = 0; i < N; ++i) {
            cin >> x;
            if (x % 2 == 0) even++;
            else odd++;
        }

        if (odd == 0)
            cout << "No\n";
        else if (odd == 1)
            cout << "Yes\n";
        else
            cout << "No\n";
}

int main() {
    fastread();
    ll t;
    cin >> t;
    while (t--)
    {
    solve();
     }
    return 0;
}