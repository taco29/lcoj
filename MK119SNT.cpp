#include <bits/stdc++.h>
#define f() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define ll long long
#define PI acos(-1)
#define tron(x) setprecision(x) << fixed
#define FOR for(int i = 0; i < n; i++)
#define enl "\n"
using namespace std;

vector<bool> check(int n){
   vector<bool> prime(n + 1, true);
   prime[0] = prime[1] = false;
   for(int i = 2; i <= sqrt(n); i++){
        if(prime[i] == true){
            for(int j = i*i; j <= n; j+=p){
                prime[i] = false;
            }
        } 
   }
    return prime;
}

void solve(){
    int count = 0;
    ll  L, R;
    cin >> L >> R;
    vector<bool> prime = check(R);
    for(int i = L; i <= R; i++){
        if(prime[i]){
            count++;
        }
    }
    cout << count << enl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}