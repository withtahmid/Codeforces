/**
 * 
 * Author: withtahmid
 * Created: 23-08-2022 13:56:05
 * 
 * */
#include<bits/stdc++.h>
using namespace std;
#define boostIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define endl "\n";
#define nl cout<<"\n";
#define ll  long long
#define nn int n; cin>>n
#define lln long long n; cin >> n
#define vi(n) vector<int>v(n)
#define vl(n) vector<long long>v(n)
#define srt(v) sort(v.begin(), v.end())
#define reverse(v) reverse(v.begin(), v.end())
#define ub(v,n) upper_bound(v.begin(), v.end(), n)
#define lb(v,n) lower_bound(v.begin(), v.end(), n)
#define pb push_back
#define decimal(n) fixed << setprecision(n)
#define test_case int t, c = 0; cin>>t;/*cin.ignore()*/ while(t--)
#define debug cout<<"I am here\n";
template <typename Type> void operator>>(istream& istream, vector<Type>& v){for(auto& i : v) cin>>i; }
template <typename Type> void operator<<(ostream& ostream, vector<Type>& v){for(auto i : v) cout<<i<<" ";}
void file_io(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
int main()
{
	file_io();
    boostIO
    int n,k,q;
    const int MAXN = 200000+10;
    vector<int>v(MAXN);
    cin>>n>>k>>q;
    while(n--)
    {
        int l,r;
        cin>>l>>r;
        v[l]++;
        v[r+1]--;
    }
    for(int i = 1; i<MAXN; i++)
    {
        v[i] = v[i]+v[i-1];
    }
    for(int i = 1; i<MAXN; i++)
    {
        if(v[i]>=k)
        {
            v[i] = 1;
        }
        else
        {
            v[i] = 0;
        }
    }
     for(int i = 1; i<MAXN; i++)
    {
        v[i] = v[i]+v[i-1];
    }

    while(q--)
    {
        int l,r;
        cin>>l>>r;
        cout << v[r] - v[l-1] << endl; 
    }
    
}
