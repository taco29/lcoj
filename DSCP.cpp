#include <bits/stdc++.h>
#define f() {ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);}
#define ll long long
using namespace std;
int main(){
    f();
    ll L, R;
    cin >> L >> R;
    cout << (floor(sqrt(R))) - (ceil(sqrt(L))) + 1;
    return 0;
}
