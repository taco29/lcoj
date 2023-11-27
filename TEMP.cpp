#include <bits/stdc++.h>
#define v "CSTC"
#define f() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define ll long long
using namespace std;

int main(){
    f();
    if(fopen(v".inp", "r")){
        freopen(v".inp","r",stdin);
        freopen(v".out", "w", stdout);
    }
    ll a, n, result = 1;
    cin >> a >> n;
    while(n > 0){
        if(n % 2 == 1){
            result = (result * a) % 10;
            a = ( a * a) % 10;
            n /=2;
        }
    }
    cout << result;
    return 0;
}
