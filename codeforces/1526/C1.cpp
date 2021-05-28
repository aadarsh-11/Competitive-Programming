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
    cin>>n;
    ll a[n+1] = {0};
    ll b[n+1] = {0};
    vector<pll> v;
    ll ans = 0;
    for (int i = 1; i <= n; ++i)
    {
        cin>>a[i];

        if(a[i] < 0)
        {
            v.pb({a[i], i});
            b[i] = b[i-1];
        }
        else
        {
            ans++;
            b[i] = b[i-1] + a[i];
        }
    }
    sort(v.rbegin(), v.rend());
    int neg = 0;
    // for (int i = 0; i < n+1; ++i)
    // {
    //     cout<<b[i]<<" ";
    // }
    // cout<<endl;
    // for(auto i: v)
    // {
    //     cout<<i.f<<" "<<i.se<<endl;
    // }
    // cout<<endl;
    for(auto i : v)
    {
        if(b[i.se] +i.f >= 0)
        {
            neg += i.f;
            for (int j = i.se; j < n+1; ++j)
            {
                b[j] += i.f;
                if(b[j] < 0)
                {
                    ans--;
                    break;
                    // cout<<ans<<endl;
                    // return;
                }
            }
            ans++;
        }
    }
    cout<<ans<<endl;
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