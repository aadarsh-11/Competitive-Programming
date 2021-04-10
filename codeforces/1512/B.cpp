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


void solve()
{
    int n;
    cin >> n;
    char a[n][n];
    std::vector<pair<int, int>> v;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> a[i][j];
            if (a[i][j] == '*')
            {
                v.pb(mp(i, j));
            }
        }
    }
    if (v[0].f == v[1].f)
    {
        // int side = abs(v[0].se - v[1].se);
        if (v[0].f >0)
        {
            a[0][v[0].se] = '*';
            a[0][v[1].se] = '*';
        }
        else
        {
            a[1][v[0].se] = '*';
            a[1][v[1].se] = '*';
        }
    }
    else if (v[0].se == v[1].se)
    {
        // int side = abs(v[0].f - v[1].f);
        if (v[0].se >0)
        {
            a[v[0].f ][0] = '*';
            a[v[1].f ][0] = '*';
        }
        else
        {
            a[v[0].f][1] = '*';
            a[v[1].f][1] = '*';
        }
    }
    else
    {
        a[v[0].f][v[1].se] = '*';
        a[v[1].f][v[0].se] = '*';
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
    // cout << endl;
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