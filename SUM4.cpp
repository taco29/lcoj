//i miss her
#include <bits/stdc++.h>
#define f() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define ll long long
#define PI acos(-1)
#define tron(x) setprecision(x) << fixed
#define FOR for(int i = 0; i < n; i++)
#define enl "\n"
using namespace std;

int main() {
    f();
    int t;
    bool sum = 1;
    cin >> t;
    while(t--){
        long n;
        cin >> n;
        for(int i = 1; i <= n; i++){
            sum += 1 / (1 + n);
        }
    }
    cout << sum<<enl;
    return 0;
}
//!solved