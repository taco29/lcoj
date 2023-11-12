//i miss her
#include <bits/stdc++.h>
#define f() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define ll long long
#define PI acos(-1)
#define FOR for (int i = 0; i < n; i++)
#define FORR for (int j = 0; j < m; j++)
#define tron setprecision(2) << fixed
using namespace std;

bool check(ll a, ll b, ll c){
    if(a + b > c && a + c > b && b + c > a){
        return true;
    }
    return false;
}

void solve(ll a, ll b, ll c){
    cout << a + b + c << " ";
    double p = (a + b + c) / 2.0;
    long double s = sqrt(p*(p - a) * (p - b) * (p - c));
    cout << tron << s;
}

int main(){
    f();
    ll a, b, c;
    cin >> a >> b >> c;
    if(check(a, b, c)){
        solve(a, b, c);
    }else{
        cout << "NO";
    }
    return 0;
}