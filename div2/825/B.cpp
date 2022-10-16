/**
 * 
 * Author: withtahmid
 * Created: 11-10-2022 14:43:58
 * 
 * */
#include<bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include "debug.h"    
#endif
using namespace std;
#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl "\n"
#define nl cout<<"\n";
#define ll  long long
#define nn int n; cin>>n
#define lln long long n; cin >> n
#define vi(n) vector<int>v(n)
#define vl(n) vector<long long>v(n)
#define srt(v) sort(v.begin(), v.end())
#define rvs(v) reverse(v.begin(), v.end())
#define ub(v,n) upper_bound(v.begin(), v.end(), n)
#define lb(v,n) lower_bound(v.begin(), v.end(), n)
#define fil(v,n) fill(v.begin(), v.end(),n)
#define acu(v) accumulate(v.begin(), v.end(),0LL)
#define pb push_back
#define sp(n) fixed << setprecision(n)
#define loop(s,n)  for(int i = s; i<n; i++)
#define rloop(n) for(int i = n; i>=0; i--)
#define test_case int t, c = 0; cin>>t;/*cin.ignore()*/ while(t--)
#define YES cout << "YES\n"
#define NO cout << "NO\n"
template <typename Type> void operator>>(istream& istream, vector<Type>& v){for(auto& i : v) cin>>i; }
template <typename Type> void operator<<(ostream& ostream, vector<Type>& v){for(auto i : v) cout<<i<<" ";}
void file_io()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
ll lcm(ll a,ll b){
    ll g =__gcd(a,b);
    return (a*b/g);
}
int main()
{
    fast_io;
    file_io();
    test_case{
        nn;
        vector<ll>a(n+2,1);
        loop(0,n){
            cin>>a[i];
        }
        vector<ll>b(n+2,1);
        loop(1, n+2)
        {
            b[i] = lcm(a[i], a[i-1]);
        }
        bool yes = true;
        loop(1,n+1)
        {
            if(__gcd(b[i],b[i+1]) != a[i])
            {
                yes = false;
                break;
            }
        }
        yes ? YES : NO;
    }
}