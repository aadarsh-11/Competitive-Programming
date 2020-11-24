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

bool isprime(int x)
{
    for (int i = 2; i <= sqrt(x); ++i)
    {
        if(x%i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int maxx(int x)
{
    for (int i = sqrt(x); i >=2; i--)
    {
        if(x%i == 0)
        {
            return i;
        }
    }
    return 0;
}

void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    std::map<ll, ll> map;
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
        map[a[i]] = i;
    }
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    sort(a,a+n);
    if(a[0] != a[1])
    {
        cout<<map[a[0]]+1<<endl;
        return;
    }
    for (int i = 1; i < n-1; ++i)
    {
        if(a[i] != a[i-1] && a[i] != a[i+1])
        {
            cout<<map[a[i]]+1<<endl;
            return;
        }
    }
    if(a[n-1] != a[n-2])
    {
        cout<<map[a[n-1]]+1<<endl;
        return;
    }
    cout<<-1<<endl;
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