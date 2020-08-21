#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ul unsigned long long int
#define pb push_back
#define f first
#define se second
// #define c1 1000000007


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
        ll a1,b1,c1;
        cin>>c1>>a1>>b1;
        ll a2,b2,c2;
        cin>>c2>>a2>>b2;
        ll ans = 0;
        ans+= 2*min(b1,a2);
        if(b1>=a2)
        {
            if(b1-a2 + c1 < b2)
            {
                ans-= 2*(b2 - (b1-a2+c1));
            }

        }
        else
        {
            if(b2 > c1)
            {
                ans-= 2*(b2-c1);
            }

        }
        cout<<ans<<"\n";
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << "\n";
    return 0;
}