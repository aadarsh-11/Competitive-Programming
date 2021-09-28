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
#define clr(x) memset(x, 0, sizeof(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define deb(x) cout << #x << "=" << x << endl
#define cdeb(x,y) cout << x << " " << y << endl
#define deb2(x, y) cout << #x << "=" << x << ", " << #y << "=" << y << endl
#define boost ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define mod 1000000007

int power(int base, int exp);
ll add(ll x, ll y) {ll res = x + y; return (res >= mod ? res - mod : res);}
ll sub(ll x, ll y) {ll res = x - y; return (res < 0 ? res + mod : res);}
ll mul(ll x, ll y) {ll res = x * y; return (res >= mod ? res % mod : res);}
ll lcm(ll x, ll y) {ll res = (x * y) / __gcd(x, y); return res;}
ll mod_inv(ll x) {return power(x, mod - 2);}

void ipgraph(int n, int m);
void dfs(int u, int par);
bool isPerfectSquare(ll x);
bool isPowerOfTwo(ll n);
bool is_prime(ll n);
int countSetBits(ll n);
void SieveOfEratosthenes();
int nod(ll n);
ll fact(ll a);
ll nCr(ll n, ll r);

const int N = 3e5, M = N;
const int max_prime = 3e5;
bool prime[max_prime+1];

vi g[N];
bool visited[N] = {0};

void solve()
{
    ll ans = 0, cnt = 0, sum = 0, tmp = 0, t1 = 0, t2 = 0;
    ll x1 = 0, x2 = 0, y1 = 0, y2 = 0;
    bool flag = 0, flag1 = 0, flag2 = 0;
    int n = 0, m = 0;

    //-----------------------------------------------------//

    int k;
    cin>>n>>m>>k;
    vector<string> v(n);
    vector<string> b(n);
    fo(i,n)
    {
        cin>>v[i];
        b[i] = v[i];
        for(int j = 0 ; j < m; j++)
        {
            b[i][j] = '.';
        }
    }
    fo(i,n-k)
    {
        fo(j,m)
        {
            if(v[i][j] == '.') continue;
            // b[i][j] = '*';
            for(int z = j+2*k; z < m; z+=2)
            {
                if((z-j)/2 >n-i-1) break;
                if(v[i][z] == '*')
                {
                    int x = j;
                    int y = i;
                    flag = 0;
                    while(x <= z)
                    {
                        if(v[y][x] == '.')
                        {
                            flag = 1;
                            break;
                        }
                        if(x < (z+j)/2)
                            y++;
                        else
                            y--;
                        x++;
                    }
                    if(flag) continue;
                    x = j;
                    y = i;
                    while(x <= z)
                    {
                        b[y][x] = '*';
                        if(x < (z+j)/2)
                        {
                            y++;
                        }
                        else
                        {
                            y--;
                        }
                        x++;
                    }
                }
            }
        }
    }

    fo(i,n)
    {
        fo(j,m)
        {
            // cout<<b[i][j]<<" ";
            if(v[i][j] != b[i][j])
            {
                cout<<"NO"<<endl;
                return;
            }
        }
        // cout<<endl;
    }
    cout<<"YES"<<endl;

}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:/CODING/C++/Sublime Text/input.txt", "r", stdin);
    freopen("D:/CODING/C++/Sublime Text/output.txt", "w", stdout);
#endif

    boost;

    int t = 1;
    cin>>t;
    while (t--)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << "\n";
    return 0;
}

void ipgraph(int n, int m)
{
    int i, u, v;
    while(m--)
    {
        cin>>u>>v;
        u--, v--;
        g[u].pb(v);
        g[v].pb(u);
    }
}

void dfs(int u, int par)
{
    for(int v:g[u])
    {
        if (v == par) continue;
        dfs(v, u);
    }
}

int power(int base, int exp) 
{
    base %= mod;
    int result = 1;
    while (exp > 0) 
    {
        if (exp & 1) result = ((ll)result * base) % mod;
        base = ((ll)base * base) % mod;
        exp >>= 1;
    }
    return result;
}

bool isPowerOfTwo(ll n)
{
    if (n == 0)
        return 0;
    while (n != 1)
    {
        if (n%2 != 0)
            return 0;
        n = n/2;
    }
    return 1;
}

bool isPerfectSquare(ll x)
{
    if (x >= 0) 
    { 
        ll sr = sqrt(x); 
        return (sr * sr == x);
    }
    return false;
}

bool is_prime(ll n)
{
    if (n == 1) return false;
 
    ll i = 2;
    while (i*i <= n) 
    {
        if (n % i == 0) return false;
        i += 1;
    }
    return true;
}

ll fact(ll a)
{
    ll i = 1;
    ll ans = 1;
    while(i <= a)
    {
        ans = mul(ans, i);
        i++;
    }
    return ans;
}

int countSetBits(ll n)
{
    if (n == 0) return 0; 
    else
    {
        return (n & 1) + countSetBits(n >> 1);
    }
}

void SieveOfEratosthenes()
{ 
    ll n = max_prime;
    memset(prime, true, sizeof(prime)); 

    for (int p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        {            
            for (long i=p*p; i<=n; i += p)
            {
                prime[i] = false;
            }
        } 
    }  
}

int nod(ll n)
{
    if(n == 0) return 1;
    n = abs(n);
    int ans = 0;
    while(n > 0)
    {
        n = n/10;
        ans++;
    }
    return ans;
}

ll nCr(ll n, ll r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
