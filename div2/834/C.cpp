/**
 * 
 * Author: withtahmid
 * Created: 18-11-202
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
#define print_case(case_no,ending) cout <<"Case "<<case_no<<ending
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
    int l, r, x, a, b;
    cin >> l >> r >> x >> a >> b;
    if(a == b){
        cout << 0 << endl;
        return;
    }
    if(a - x <= l and a + x >= r){
        cout << -1 << endl;
        return;
    }

    if(abs(a-b) >= x){
        cout << 1 << endl;
        return;
    }
    if(a<b){
        if((a + x + abs(b-a) <= r) or (a - (x + abs(b-a)) >=l ) ){
            cout << 2 << endl;
        }
        else if(l + x <= b and a + x <= r){
            cout << 3 << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    else{
        if((a - (x+abs(a-b)) >= l) or (a + (x+abs(a-b)) <= r)){
            cout << 2 << endl;
        }
        else if(r - x <= b and a-x >=l){
            cout << 3 << endl;
        }
        else{
            cout<< -1 << endl;
        }
    }
}
