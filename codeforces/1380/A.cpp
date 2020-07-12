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
        for (int i = 0; i < n; ++i)
        {
            cin>>a[i];
        }
        // for (int i = 0; i < n-2; ++i)
        // {
        //     if(a[i]<a[i+1])
        //     {
        //         for (int j = i+2; j < n; ++j)
        //         {
        //             if(a[j]<a[i])
        //             {
        //                 flag = 1;
        //                 break;
        //             }
        //         }
        //     }

        // }
        ll j = 1;
        ll x = 0,y = 0,z = -1;
        int max = -1;
        while(a[j]<a[j-1])
        {
            j++;
        }
        x = j-1;
        for (int i = x+1; i < n; ++i)
        {
            if(a[i]>=a[i-1])
            {
                continue;
            }
            else
            {
                y = i-1;
                z = i;
                break;
            }
        }
        // for (int i = y+1; i < n; ++i)
        // {
        //     if (a[i]<a[i-1])
        //     {
        //         z = i;
        //     }
        //     else
        // }
        // while(i < n)
        // {
        //     if(a[i] > a[x] && z<0)
        //     {
        //         // x = i-1;
        //         y = i;
        //         for (int j = i+1; j < n; ++j)
        //         {
        //             if(a[j] < a[y])
        //             {
        //                 z = j;
        //                 break;
        //             }
        //         }
        //         i++;
        //         continue;
        //     }
        //     else if(a[i] < a[y])
        //     {
        //         z = i;
        //         i++;
        //         break;
        //     }
        //     else
        //     {
        //         i++;
        //     }

        // }
        if( x>=0 && y>=0 && z>=0)
        {
            cout<<"YES\n"<<x+1<<" "<<y+1<<" "<<z+1<<"\n";
        }
        else
        {
            cout<<"NO\n";
        }

    }
    return 0;
}