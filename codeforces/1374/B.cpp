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
        ll cnt = 0;
        cin>>n;
        int flag = 0;
        while(n > 1)
        {
            if(n % 6 == 0)
            {
                n = n/6;
                cnt++;
            }
            else if(n % 3 == 0)
            {
                n = 2*n;
                cnt++;
            }
 
            else
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
        {
            cout<<"-1\n";
        }
        else
        {
            cout<<cnt<<"\n";
        }
            
    }
    return 0;
}