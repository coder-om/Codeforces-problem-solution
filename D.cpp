
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

int main() 
{
    ll n;
    cin>>n;
    vll v(n);
    For(i, 0, n)
    {
        cin>>v[i];
    }
    ll cnt=0, pre=0;
    set<ll> s;
    s.insert(0);
    For(i, 0, n)
    {
        pre+=v[i];
        if(s.find(pre)!=s.end())
        {
            cnt++;
            s.clear();
            pre=v[i];
            s.insert(0);
        }
        s.insert(pre);
    }

    cout<<cnt;
    return 0; 
}
