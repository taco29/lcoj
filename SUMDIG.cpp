//i miss her
#include <bits/stdc++.h>
#define f() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define ll long long
#define PI acos(-1)
#define FOR for (int i = 0; i < a; i++)
#define FORR for (int j = 0; j < b; j++)
using namespace std;

void solve(){
    ll num;
    int sum = 0;
    cin >> num;
    while(num != 0){
        sum += num % 10;
        num /= 10;
    }
    cout << sum << endl;
}

int main(){
    f();
    ll n;
    cin >> n;
    while(n--){
        solve();
    }    
    return 0;
}