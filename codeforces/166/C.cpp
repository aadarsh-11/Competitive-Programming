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
    int n, x;
    cin >> n >> x;
    std::vector<int> a(n);
    int ans = 0;
    bool ifx = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (a[i] == x)
        {
            ifx = 1;
        }
    }

    if (!ifx)
    {
        a.push_back(x);
        n++;
    }

    sort(all(a));
    if (a[(n - 1) / 2 ] == x)
    {
        if (!ifx)
        {
            cout << 1 << endl;
            return;
        }
        cout << 0 << endl;
        return;
    }

    if (a[(n - 1) / 2 ] > x)
    {
        int j = (n - 1) / 2;
        while (a[j] != x)
        {
            j--;
        }
        // if ((n - 1 - j ) % 2 == 1)
        // {
        // }
        // else
        // {
        //     ans = n - 1 - j - j;
        // }
            ans = n - 1 - j - 1 - j;
    }

    if (a[(n - 1) / 2 ] < x)
    {
        int j = (n - 1) / 2;
        while (a[j] != x)
        {
            j++;
        }
        if (( j ) % 2 == 0)
        {
            ans = j - (n - 1 - j);
        }
        else
        {
            ans = j - (n - 1 - j);
        }
    }
    if (!ifx)
    {
        ans++;
    }
    cout << ans << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:/CODING/C++/Sublime Text/input.txt", "r", stdin);
    freopen("D:/CODING/C++/Sublime Text/output.txt", "w", stdout);
#endif

    boost;

    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << "\n";
    return 0;
}