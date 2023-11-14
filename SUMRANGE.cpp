//i miss her
#include <bits/stdc++.h>
#define f() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define ll long long
#define PI acos(-1)
#define tron(x) setprecision(x) << fixed
#define FOR for(int i = 0; i < n; i++)
#define enl "\n"
using namespace std;

bool check(int n){
    if(n % 2 !=){
        return true;
    }
    return false;
}

void solve(){
    ll l, r, sum = 0;
    cin >> l >> r;
    for(int i = l; i <= r; i++){
        if(check(i)){
            sum+=i;
        }
    }
    cout << sum;
}

int main(){
    f();
    solve();
    return 0;
}