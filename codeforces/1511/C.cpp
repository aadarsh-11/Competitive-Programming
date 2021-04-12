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
    int n,q;
    cin>>n>>q;
    int a[n];
    int data[51] = {0};
    std::vector<int> ans;
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
        if(data[a[i]] == 0) data[a[i]] = i+1;
    }
    int b[q];
    for (int i = 0; i < q; ++i)
    {
        cin>>b[i];
        ans.pb(data[b[i]]);
        if(data[b[i]] == 1)
            continue;
        for (int j = 1; j < 51; ++j)
        {
            if(j == b[i] || data[j] == 0) continue;
            if(data[j] <data[b[i]])
                data[j]++;
        }
        data[b[i]] = 1;
    }
    for (int i = 0; i < ans.size(); ++i)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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