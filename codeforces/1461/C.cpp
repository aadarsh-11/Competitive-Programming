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
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    std::vector<pair<int,float>> v(m);
    for (int i = 0; i < m; ++i)
    {
        int x;
        float y;
        cin>>x>>y;
        v[i] = make_pair(x,y);
        // cout<<v[i].f<<v[i].se<<endl;
    }

    int pos = 0;
    for (int i = n-1; i >= 0; --i)
    {
        if(a[i] != i+1)
        {
            pos = i;
            break;
        }
    }
    if(pos == 0)
    {
        cout<< fixed << setprecision(6)<<float(1)<<endl;
        return;
    }
    else
    {
        // cout<<pos<<endl;
        float ans = 0;
        float mul = 1;
        for (int i = 0; i < m; ++i)
        {
            if(v[i].f - 1 >= pos)
            {
                ans += mul*v[i].se;
                mul = mul*(1-v[i].se);
            }
        }
        cout<< fixed << setprecision(6)<< ans <<endl;
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
    cin>>t;
    while(t--)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << "\n";
    return 0;
}   