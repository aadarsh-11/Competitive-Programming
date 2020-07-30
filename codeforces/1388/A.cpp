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
        if(n>30)
        {
            cout<<"YES\n6 10 ";
            if(n - 30 == 6 || n - 30 == 10 || n - 30 == 14 )
            {
                cout<<"15 "<<n-31<<"\n";
            }
            else
            {
                cout<<"14 "<<n-30<<"\n";
            }
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}