#include<bits/stdc++.h>
using namespace std;
#define fab(a,b,i) for(int i=a; i<b; i++)
#define ll long long int
#define ul unsigned long long int
#define pb push_back
#define eb emplace_back
#define db double
#define mp make_pair
#define mt make_tuple
#define endl "\n"
#define f first
#define se second
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define all(x) x.begin(), x.end()
#define mod 1000000007
#define boost ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

ll add(ll x, ll y) {ll res = x + y; return (res >= mod ? res - mod : res);}
ll sub(ll x, ll y) {ll res = x - y; return (res < 0 ? res + mod : res);}
ll mul(ll x, ll y) {ll res = x * y; return (res >= mod ? res % mod : res);}
ll power(ll x, ll y) {ll res = 1; x %= mod; while (y) {if (y & 1)res = mul(res, x); y >>= 1; x = mul(x, x);} return res;}
ll mod_inv(ll x) {return power(x, mod - 2);}
ll lcm(ll x, ll y) {ll res = (x * y) / __gcd(x, y); return res;}

ll fact(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return (n * (fact(n - 1))) % mod;
}

void solve()
{
    int n;
    cin >> n;
    ll ans = 0;
    ll a[n];
    std::map<ll, int> map;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        map[a[i]]++;
    }
    sort(a, a + n);
    if (a[0] == a[n - 1])
    {
        cout << fact(n) << endl;
        return;
    }
    if (a[0] == a[1])
    {
        for (int i = 2; i < n; ++i)
        {
            if ((a[0] & a[i]) != a[0])
            {
                cout << 0 << endl;
                return;
            }
        }
        ans = fact(n - 2);
        ans = (ans * map[a[0]] * (map[a[0]] - 1)) % mod;
        cout << ans << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:/CODING/C++/Sublime Text/input.txt", "r", stdin);
    freopen("D:/CODING/C++/Sublime Text/output.txt", "w", stdout);
#endif

    boost;

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << "\n";
    return 0;
}