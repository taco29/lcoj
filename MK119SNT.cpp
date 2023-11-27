//i miss her
#include <bits/stdc++.h>
#define f() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define ll long long
#define PI acos(-1)
#define tron(x) setprecision(x) << fixed
#define FOR for(int i = 0; i < n; i++)
#define enl "\n"
using namespace std;

bool sieve(int n) {
    vector<bool> prime(n+1, true);
    prime[0] = prime[1] = false;
    for (int p = 2; p*p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p*p; i <= n; i += p)
                prime[i] = false;
        }
    }
}

int main() {
    int t, count = 0;
    cin >> t;
    while(t--){
        long l, r;
        cin >> l >> r;
        for(int i = l; i <= r; i++){
            if(sieve(i)){
                count++;
            }
        }
    }
    cout << count;
    return 0;
}
//!solved