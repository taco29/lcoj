#include <bits/stdc++.h>
#define ll long long
#define PI acos(-1)
#define FOR for (int i = 0; i < a; i++)
#define FORR for (int j = 0; j < b; j++)
#define cc 998244353
using namespace std;

ll sum(ll t){
    return t * (t + 1) / 2 % cc;
}
void solve(){
    ll a, b ,c;
    cin >> a >> b >> c;
    ll suma = sum(a);
	ll sumb = sum(b);
	ll sumc = sum(c);

    cout << ((suma * sumb) % cc * sumc) % cc << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long n;
    cin >> n;
    cin.ignore();
    while (n--){
        solve();
    }
    return 0;
}
