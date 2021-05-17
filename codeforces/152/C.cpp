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
    int n,m;
    cin>>n>>m;
    std::map<char, ll> map;
    std::vector<string> vs;
    ll ans = 1;
    for (int i = 0; i < n; ++i)
    {
        string s;
        cin>>s;
        vs.pb(s);
    }
    int v[m] = {0};
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if(map[vs[j][i]] == 0)
            {
                v[i]++;
                map[vs[j][i]] = 1;
            }
        }
        map.clear();
    }
    for (int i = 0; i < m; ++i)
    {
        ans = mul(ans,v[i]);
    }
    cout<<(ans)%mod<<endl;
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
    while(t--)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << "\n";
    return 0;
}