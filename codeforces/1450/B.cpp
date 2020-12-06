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
ll lcm(ll x, ll y) {ll res=(x*y)/__gcd(x,y); return res;}


void solve()
{
    int n,k;
    cin>>n>>k;
    std::vector<pair<int,int>> a(n);
    for (int i = 0; i < n; ++i)
    {
        int x,y;
        cin>>x>>y;
        a[i].f = x;
        a[i].se = y;
    }

    vector<vector<int>> g(n);

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if(abs(a[j].f - a[i].f)+abs(a[j].se - a[i].se) <= k && i != j)
            {
                g[i].pb(j);
            }
        }
    }

    int max = 0;

    for (int i = 0; i < g.size(); ++i)
    {
        // if(g[i].size() == 0)
        // {
        //     cout<<-1<<endl;
        //     return;
        // }

        if(g[i].size() > max)
        {
            max = g[i].size();
            // maxi = i;
        }
    }
    if(max == g.size() - 1)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
    // for (int i = 0; i < n; ++i)
    // {
    //     cout<<a[i].f<<" "<<a[i].se<<endl;
    // }
    // for (int i = 0; i < g.size(); ++i)
    // {
    //     if(g[i].size() == 0)
    //     {
    //         cout<<-1<<endl;
    //     }
    //     for (int j = 0; j < g[i].size(); ++j)
    //     {
    //         cout<<g[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("D:/CODING/C++/Sublime Text/input.txt", "r", stdin);
    freopen("D:/CODING/C++/Sublime Text/output.txt", "w", stdout);
    #endif

    boost;

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << "\n";
    return 0;
}