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
        ll x = 0;
        if(n%4==0)
        {
            x = n/4;
        }
        else
        {
            x = n/4+1;
        }
        for (int i = 0; i < n-x; ++i)
        {
            cout<<"9";
        }
        for (int i = 0; i < x; ++i)
        {
            cout<<"8";
        }
        cout<<"\n";
    }
    return 0;
}