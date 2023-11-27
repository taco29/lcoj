//i miss her
#include <bits/stdc++.h>
#define f() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define ll long long
#define PI acos(-1)
#define tron(x) setprecision(x) << fixed
#define FOR for(int i = 0; i < n; i++)
#define enl "\n"
using namespace std;

int main(){
    f();
    long n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        }
    sort(a, a + n);
    cout << max((a[n-1] * a[1] * a[0]) , a[n-1] * a[n-2] * a[n-3]);
    return 0;
}