/**
 * 
 * Author: withtahmid
 * Created: 21-11-2022
 * 
 * */
#include<bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include <debug.h> 
#define debug(...) cerr<<"[" << #__VA_ARGS__ <<"] --> "; _debug(__VA_ARGS__); cerr << endl
#else
#define debug(...) 
#endif
using namespace std;
#define endl '\n'
#define nl cout<<"\n";
#define pb push_back  
#define all(v) v.begin(),v.end()
#define srt(v) sort(v.begin(), v.end())
#define rvs(v) reverse(v.begin(), v.end())
#define ub(v,n) upper_bound(v.begin(), v.end(), n)
#define lb(v,n) lower_bound(v.begin(), v.end(), n)
#define fil(v,n) fill(v.begin(), v.end(),n)
#define mem(v,value) memset(&v[0], value, sizeof(v[0]) * v.size())
#define sp(n) fixed << setprecision(n)
#define print_case(case_no,ending) cout <<"Case "<<case_no<<":"<<ending
template <typename Type> void operator>>(istream& istream, vector<Type>& v){for(auto& i : v) cin>>i;}
typedef int_fast64_t ll;
typedef vector<int> vi;
typedef vector<int_fast64_t>vll;
typedef pair<int,int> pii;
void solve(int);
void test();
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    io();
    #endif
    time_t Time; time(&Time);cerr << ctime(&Time) << endl;
    auto starttime = chrono::steady_clock::now();
    bool multiple_test_case = true;
    int testcase = 1; if(multiple_test_case){cin >> testcase;}
    for(int tc = 1; tc <= testcase; ++tc){
        solve(tc);
    }
    cerr << endl << "\nElapsed time: " << chrono::duration_cast<chrono::milliseconds>(chrono::steady_clock::now() - starttime).count() << " millisecond\n";
}
void solve(int case_no){
    int n;
    cin >> n;
    vi v(n), v2(n), v3(n);
    cin >> v;
    v2 = v;
    v3 = v;
    for(int i = 0; i < n; ++i){
        if(!v2[i]){
            v2[i] = 1;
            break;
        }
    }
    for(int i = n-1; i >=0; --i){
        if(v3[i]){
            v3[i] = 0;
            break;
        }
    }
    vi res(n,0), res2(n,0), res3(n,0);
    int zeros1 = 0, zeros2 = 0, zeros3 = 0;
    for(int i = n-1; i >=0; --i){
        if(v[i]){
            res[i] = zeros1;
        }
        else{
            ++zeros1;
        }

        if(v2[i]){
            res2[i] = zeros2;
        }
        else{
            ++zeros2;
        }
        
        if(v3[i]){
            res3[i] = zeros3;
        }
        else{
            ++zeros3;
        }
    }
    cout << max(max(accumulate(all(res), 0LL),accumulate(all(res2), 0LL)),accumulate(all(res3), 0LL) )<< endl;
}