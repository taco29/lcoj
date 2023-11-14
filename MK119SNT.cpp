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
   for(int i = 2; i * i <= n; i++){
        if(prime[i] == true){
            for(int j = i * i; j <= n; j += (i > 2 ? 2 * i : i)){
                prime[j] = false;
            }
        }
   }
    return prime;
}
int main(){
    int t;
    cin >> t;
    ll L, R;
    cin >> L >> R;
    vector<bool> prime = check(R);
    while(t--){
        int count = 0;
        for(int i = L; i <= R; i++){
            if(prime[i]){
                count++;
            }
        }
        cout << count << enl;
    }
    return 0;
}
//!solve