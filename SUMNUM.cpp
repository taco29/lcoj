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
    ll n, sum = 0;
    cin >> n;
    for(int i = 1; i<=sqrt(n); i++){
        if(n % i == 0){
            sum += i;
            if(i!=sqrt(n)){
				sum += n / i;
			}
        }
    }
    cout << sum;
    return 0;
}
