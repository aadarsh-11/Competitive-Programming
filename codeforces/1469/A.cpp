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
    string s;
    cin>>s;
    if(s.size()%2 == 1)
    {
        cout<<"NO"<<endl;
        return;
    }
    int cnt = 0;
    int cnt1 = 0;
    int cnt2 = 0;
    std::vector<pair<char,int>> v;
    std::vector<int> q;
    for (int i = 0; i < s.size(); ++i)
    {
        if(v.size() == 0 && s[i] == ')')
        {
            // v.push_back(mp(')',i));
            if(q.size() == 0)
            {
                cout<<"NO"<<endl;
                return;
            }
            else
            {
                q.pop_back();
            }
        }
        else if(s[i] == ')')
        {
            v.pop_back();
        }
        else if(s[i] == '(')
        {
            v.push_back(mp('(',i));
        }
        else
        {
            cnt1++;
            q.push_back(i);
        }
    }
    if(v.size() == 0)
    {
        cout<<"YES"<<endl;
        return;
    }
    sort(all(q));
    cnt = 0;
    int i= 0;
    while(q[q.size()-1-i] > v[0].se)
    {
        i++;
        cnt++;
    }
    if(cnt>=v.size())
    {
        cout<<"YES"<<endl;
        return;
    }
    else
    {
        cout<<"NO"<<endl;
        return;
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