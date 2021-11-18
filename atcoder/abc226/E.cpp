#include<bits/stdc++.h>
using namespace std;

#define fab(a,b,i) for(int i=a; i<b; i++)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
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
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define clr(x) memset(x, 0, sizeof(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define deb(x) cout << #x << "=" << x << endl
#define cdeb(x,y) cout << x << " " << y << endl
#define deb2(x, y) cout << #x << "=" << x << ", " << #y << "=" << y << endl
#define boost ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define mod 998244353

ll add(ll x, ll y) {ll res = x + y; return (res >= mod ? res - mod : res);}
ll sub(ll x, ll y) {ll res = x - y; return (res < 0 ? res + mod : res);}
ll mul(ll x, ll y) {ll res = x * y; return (res >= mod ? res % mod : res);}
ll lcm(ll x, ll y) {ll res = (x * y) / __gcd(x, y); return res;}

int dfs(vvi &gr, int i , int &edges, vi &vis )
{
    vis[i] = 1;
    edges += gr[i].size();
    int nodes = 1;
 
    for(auto &v:gr[i])
    {
        if(!vis[v])
            nodes += dfs(gr, v, edges, vis);
    }
    return nodes;
}

int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("D:/CODING/C++/Sublime Text/input.txt", "r", stdin);
//     freopen("D:/CODING/C++/Sublime Text/output.txt", "w", stdout);
// #endif

    boost;

    int n = 0, m = 0;

    //-----------------------------------------------------//

    cin>>n>>m;
    vvi gr(n,vi());
    fo(i,m)
    {
        int u,v;
        cin>>u>>v;
        u--,v--;
        gr[u].pb(v);
        gr[v].pb(u);
    }
 
    int ans = 1;
    vi vis(n,0);
 
    fo(i,n)
    {
        if(!vis[i])
        {
            int edges = 0;
            int nodes = dfs(gr,i,edges, vis);
            if(edges != 2ll*nodes)
            {
                ans = 0;
                break;
            }
            else
            {
                ans = mul(ans, 2ll);
            }
        }
    }
    cout<<ans<<endl;

    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << "\n";
    return 0;
}