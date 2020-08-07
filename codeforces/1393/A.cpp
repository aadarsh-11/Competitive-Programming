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
        cout<<(n/2)+1<<"\n";
    }
    return 0;
}