#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ul unsigned long long int
#define pb push_back
#define f first
#define s second
#define c1 1000000007


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        ll b[n];
        for (int i = 0; i < n; ++i)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; ++i)
        {
            cin>>b[i];
        }
        ll x = *min_element(a,a+n);
        ll y = *min_element(b,b+n);

        ll count = 0;

        for (int i = 0; i < n; ++i)
        {
            a[i] = a[i] - x;
            b[i] = b[i] - y;

            count = count + max(a[i], b[i]);
        }

        cout<<count<<"\n";
    }
    return 0;
}