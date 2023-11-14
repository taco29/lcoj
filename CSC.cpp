//i miss her
#include <bits/stdc++.h>
#define f() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define ll long long
#define PI acos(-1)
#define tron(x) setprecision(x) << fixed
#define FOR for(int i = 0; i < n; i++)
#define enl "\n"
using namespace std;

void solve(){
}

int main(){
    f();
    long a, b, c, d;
    cin >> a >> b >> c;
    if( a < b){
        d = b - a;
        cout << c + d;
    }
    if(a > b && c > b){
        d = c - b;
        cout << c + d;
    }
    return 0;
}
//!solved
