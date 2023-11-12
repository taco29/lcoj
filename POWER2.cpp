//i miss her
#include <bits/stdc++.h>
#define f() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define ll long long
#define PI acos(-1)
#define FOR for (int i = 0; i < n; i++)
#define FORR for (int j = 0; j < m; j++)
#define tron setprecision(2) << fixed
using namespace std;

ll solve(ll a, ll b){
    if(b == 0){
        return 1;
    }else if(b % 2 == 0){
        ll c = solve(a, b/2);
        return c * c; 
    }else{
        return a * solve(a, b-1);
    }
    
}
int main(){
    f();
    ll a;
    ll b;
    cin >> a >> b;
    cout << solve(a,b) << endl;
    return 0;
}
//!SOLVED