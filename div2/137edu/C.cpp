/**
 * 
 * Author: withtahmid
 * Created: 17-10-2022 23:32:53
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
#define loop(n)  for(int i = 0; i<n; i++)
#define rloop(n) for(int i = n; i>=0; i--)
#define test_case int t, c = 0; cin>>t;/*cin.ignore()*/ while(t--)
template <typename Type> void operator>>(istream& istream, vector<Type>& v){for(auto& i : v) cin>>i; }
template <typename Type> void operator<<(ostream& ostream, vector<Type>& v){for(auto i : v) cout<<i<<" ";}
void file_io()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

int main()
{
    fast_io;
    file_io();
    test_case{
        int n;
        cin >> n;
        string str;
        vi(n);
        cin>>str;
        cin>>v;
        for(int i = 1; i<n; i++)
        {
            if(str[i] == '0')
            {
                continue;
            }

            int indx_start = i-1;
            int value = v[indx_start];
            int indx_swap = indx_start;

            while(str[i] == '1' && i < n)
            {
                if(v[i] < value)
                {
                    value = v[i];
                    indx_swap = i;
                }
                i++;
            }
            swap(str[indx_start], str[indx_swap]);
        }

        ll sum = 0;
        for(int i = 0; i < n; i++)
        {
            if(str[i] == '1')
            {
                sum += v[i];
            }
        }
        
        cout << sum << endl;
    }
}
