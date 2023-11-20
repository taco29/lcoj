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
    long t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        string s = "";
        while(n != 0){
            if( n % 2 == 0){
                s = '0' + s;
            }else{
                s = '1' + s;
            }
            n /= 2;
        }
        cout << n << enl;
    }
    return 0;
}