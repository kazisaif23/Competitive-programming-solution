#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using ll = long long;
using ld = long double;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
using vvi = vector<vi>;
using vvll = vector<vll>;
const ll MOD = 1000000007;

// ---- MODULAR FUNCTIONS ----
ll add(ll a, ll b) { return (a + b) % MOD; }
ll sub(ll a, ll b) { return ((a - b) % MOD + MOD) % MOD; }
ll mul(ll a, ll b) { return (a % MOD * b % MOD) % MOD; }

ll power(ll a, ll b)
{
    ll res = 1;
    while (b)
    {
        if (b & 1)
            res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

ll modInverse(ll a)
{
    return power(a, MOD - 2);
}

auto it = lower_bound(v.begin(), v.end(), x);

// ----------------------------


void solve()
{
    
}

int main()
{
    fastread();
    // ll t;
    // cin >> t;
    // while (t--)
    {
        solve();
    }
    return 0;
}
