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

int lcm(int a, int b)
{
    return (a / __gcd(a, b)) * b;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    std::vector<pair<int, pair<int,int>>> r(n);
    std::vector<pair<int, pair<int,int>>> l(n);
    int x = 0;
    int mx = 0;
    int mn = 0;
    for (int i = n - 1; i >= 0; --i)
    {
        if (s[i] == '+')
        {
            x--;
        }
        else
        {
            x++;
        }

        r[i].f =  x;
        r[i].se.f =  min(mn, x);
        mn = r[i].se.f;
        r[i].se.se = max(mx, x);
        mx = r[i].se.se;
    }
    x = 0;
    mx = 0;
    mn = 0;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '+')
        {
            x++;
        }
        else
        {
            x--;
        }

        l[i].f =  x;
        l[i].se.f =  min(mn, x);
        mn = l[i].se.f;
        l[i].se.se = max(mx, x);
        mx = l[i].se.se;
    }

    // for (int i = 0; i < n; ++i)
    // {
    //     cout<<l[i].se.f<<" "<<l[i].se.se<<" , "<<l[i].f<<" , "<<r[i].f<<" , "<<r[i].se.f<<" "<<r[i].se.se<<endl;
    // }

    for (int i = 0; i < m; ++i)
    {
        int a,b;
        cin>>a>>b;
        a--;
        b--;
        if(a == 0 && b ==n-1)
        {
            cout<<1<<endl;
            continue;
        }
        if(a == 0)
        {
            b++;
            cout<<r[b].se.se-r[b].se.f + 1<<endl;
            continue;
        }
        if(b == n-1)
        {
            a--;
            cout<<l[a].se.se-l[a].se.f + 1<<endl;
            continue;            
        }
        if(a == b)
        {

        }
        a--;
        b++;
        // r[b].se.se += (l[a].f - r[b].f);
        // r[b].se.f += (l[a].f - r[b].f);

        // cout<<l[a].se.f<<" "<<l[a].se.se<<" , "<<l[a].f<<" , "<<r[b].f<<" , "<<r[b].se.f<<" "<<r[b].se.se<<endl;
        cout<<max(l[a].se.se,r[b].se.se + (l[a].f - r[b].f))-min(l[a].se.f,r[b].se.f + (l[a].f - r[b].f)) + 1<<endl;
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