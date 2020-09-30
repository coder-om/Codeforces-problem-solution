
#include<bits/stdc++.h>
using namespace std; 

#define el              "\n"
#define vll             vector <ll>
ll __gcd(ll a, ll b){if(a==0) return b; return __gcd(b%a, a);}

void solve()
{
    ll n;
    cin>>n;
    ll c=ceil(sqrt(n));

    cout<<c-1+ceil((db)(n-c)/c)<<el;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    /***************-Code starts from here-***************/
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0; 
}
