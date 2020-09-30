/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 
  Name:- OMHARI 
  Institution:- UNIVERSIT OF CALCUTTA(INFORMATION TECHNOLOGY)
  Email:- omharicu@gmail.com
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
#include<bits/stdc++.h>
using namespace std; 

#define F               first
#define S               second
#define ull             unsigned long long
#define ll              long long
#define db              long double
#define ST              string
#define pb              push_back
#define mp              make_pair
#define el              "\n"
#define vll             vector <ll>
#define vi              vector <int>
#define pii             pair <int, int>
#define pll             pair <ll, ll>
#define sz(v)           int(v.size())
#define vec(v)          vector <v>
#define all(v)          v.begin(), v.end() 
#define rall(v)         v.rbegin(), v.rend() 
#define is_sort(v)      is_sorted (all(v))
#define max_of(v)       *max_element (all(v))
#define min_of(v)       *min_element (all(v))
#define itos(s)         to_string(s)
#define cntone(x)       __builtin_popcountll(x)
#define cntzro(x)       __builtin_clz(x)
#define clr(x,y) 	    memset(x, y, sizeof(x))
#define fil(x,y) 	    fill(all(x), y)
#define For(i, a, b)    for(int i=a; i<b; i++)
#define Forr(i, a, b)   for(int i=a; i>=b; i--)
#define PI          	3.1415926535897932384626
const ll mod = 1e9+7;
ll __gcd(ll a, ll b){if(a==0) return b; return __gcd(b%a, a);}

int go(vll a, vll b, vec(pii) v)
{
    For(i, 0, sz(v))
    {
        int cc=min(a[v[i].F], b[v[i].S]);
        a[v[i].F]-=cc;
        b[v[i].S]-=cc;
    }

    return min(a[0], b[1])+min(a[1], b[2])+min(a[2], b[0]);
}

void solve()
{
    ll n;
    cin>>n;
    vll a(3), b(3);
    For(i, 0, 3) cin>>a[i];
    For(i, 0, 3) cin>>b[i];

    ll mn=INT_MAX, mx=0, t;
    vll p=a, q=b;
    t=min(a[0], b[1]);
    mx+=t;
    a[0]-=t;
    b[1]-=t;
    t=min(a[1], b[2]);
    mx+=t;
    a[1]-=t;
    b[2]-=t;
    t=min(a[2], b[0]);
    mx+=t;
    a[2]-=t;
    b[0]-=t;

    vec(pii) v;
    v.pb(mp(0, 0));
    v.pb(mp(1, 1));
    v.pb(mp(2, 2));
    v.pb(mp(0, 2));
    v.pb(mp(1, 0));
    v.pb(mp(2, 1));

    sort (all(v));

    do
    mn=min((int)mn, go(p, q, v));
    while(next_permutation(all(v)));
    
 

    cout<<mn<<" "<<mx;


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
    // int t;
    // cin>>t;
    // while(t--)
    solve();
    return 0; 
}